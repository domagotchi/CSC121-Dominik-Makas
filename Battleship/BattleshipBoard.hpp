#include <iostream>
#include <vector>
using namespace std;

//this hpp includes the format of the board and will update with each fired shot. 
//This board will be used by both Player1 and the opponent (Player2 or CPU)

class BattleshipBoard {
    private:
        vector<vector<char>> grid;
        int shipRow;
        int shipCol;

    public:
        BattleshipBoard() {
            grid = vector<vector<char>>(10, vector<char>(10, '~'));
            shipRow = -1;
            shipCol = -1;
        }

        void setShip(int r, int c) {
            shipRow = r;
            shipCol = c;
        }

        bool isAlreadyFired(int r, int c) {
            return (grid[r][c] == 'X' || grid[r][c] == 'O');
        }

        //true if hit, false if miss
        bool receiveFire(int r, int c) {
            if (r == shipRow && c == shipCol) {
                grid[r][c] = 'O';
                return true;
            } else {
                grid[r][c] = 'X';
                return false;
            }
        }

        void displayBoard(bool showShip) {
            cout << "   A B C D E F G H I J" << endl;
            for (int r = 0; r < 10; ++r) {
                if (r < 9) cout << " ";
                    cout << r + 1 << " ";

                for (int c = 0; c < 10; ++c) {
                    if (r == shipRow && c == shipCol && grid[r][c] != 'O') {
                        if (showShip) {
                            cout << "█ ";
                        } else {
                            cout << "~ ";
                        }
                    } else {
                        cout << grid[r][c] << " ";
                    }
                }
                cout << endl;
            }
            cout << endl;
        }
};