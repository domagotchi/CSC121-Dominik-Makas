#include <iostream>
#include <vector>
#include <fstream>
#include "save&load.hpp"
#include "checkfunctions.hpp"
using namespace std;

void printBoard(const vector<vector<char>>& board) {
    cout << "1 2 3 4 5 6 7" << endl;
    for (int r = 0; r < ROWS; ++r) {
        for (int c = 0; c < COLUMNS; ++c) {
            cout << board[r][c] << " ";
        }
        cout << endl;
    }
}


int main() {
    // I just learneed that variables can be all caps....
    const char EMPTY = '-';
    const int ROWS = 6;
    const int COLUMNS = 7;
    // six seeeeven
    vector<vector<char>> board(ROWS, vector<char>(COLUMNS, EMPTY));
    const char PLAYER_X = 'X';
    const char PLAYER_O = 'O';
    char PLAYER_CURRENT = PLAYER_X;
    bool gameOver = false;

    cout << "-----------------" << endl;
    cout << "  CONNECT FOUR" << endl;
    cout << "-----------------" << endl;

    char choice = '?';
    while (choice != 'Y' && choice != 'y' && choice != 'N' && choice != 'n') {
        cout << "Load a previously saved game? 'Y' or 'N'" << endl;
        cin >> choice;

        if (choice != 'Y' && choice != 'y' && choice != 'N' && choice != 'n') {
            cout << "Invalid input. Try again." << endl;
        }
    }

    cout << endl << endl;
    if (choice == 'Y' || choice == 'y') {
        gameLoad(board, PLAYER_CURRENT);
    }
    while (!gameOver) {
        cout << "-----------------" << endl;
        cout << "PLAYER " << PLAYER_CURRENT << endl;
        cout << "-----------------" << endl << endl;
        printBoard(board);
        cout << endl;
        cout << "Make your move - Choose a column (1-7)" << endl;
        cout << "or press 'S' to save and quit" << endl;
        string input;
        cin >> input;
        cout << endl;

        if (input == "s" || input == "S") {
            gameSave(board);
            break;
        }
        if (input.length() != 1 || input[0] < '1' || input[0] > '7') {
            cout << "Invalid input. Try again." << endl << endl;
            continue;
        }

        int col = input[0] - '1';
        int placedRow = -1;

        for (int r = ROWS - 1; r >= 0; --r) {
            if (board[r][col] == EMPTY) {
                board[r][col] = PLAYER_CURRENT;
                placedRow = r;
                break;
            }
        }

        if (placedRow == -1) {
            cout << "Invalid input. Try again." << endl << endl;
            continue;
        }

        if (checkWin(board, placedRow, col)) {
            cout << endl << endl << endl;
            cout << "-----------------" << endl;
            cout << "PLAYER " << PLAYER_CURRENT << " WINS" << endl;
            cout << "-----------------" << endl << endl;
            printBoard(board);
            cout << endl;
            gameOver = true;
        } else {
            bool isTie = true;
            for (int c = 0; c < COLUMNS; ++c) {
                if (board[0][c] == EMPTY) {
                    isTie = false;
                    break;
                }
            }
            if (isTie) {
                printBoard(board);
                cout << endl;
                cout << "Tie game..." << endl;
                gameOver = true;
            }
        }

        if (!gameOver) {
            PLAYER_CURRENT = (PLAYER_CURRENT == PLAYER_X) ? PLAYER_O : PLAYER_X;
        } else {
            cout << "The game is now over." << endl;
        }
    }

    return 0;
}
