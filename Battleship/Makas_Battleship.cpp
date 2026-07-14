#include <iostream>
#include <vector>
#include "BattleshipBoard.hpp"
#include "CPU.hpp"
#include "userInput.hpp"
using namespace std;

int main() {
    srand(time(nullptr));
    int gameMode;
    BattleshipBoard p1Board;
    BattleshipBoard p2Board;
    CPUPlayer cpu;
    int r1;
    int c1;
    string p1name;
    string p2name;


    cout << endl << "WELCOME TO BATTLESHIP" << endl;
    cout << "--------------------------------------" << endl;
    cout << "1. Player vs CPU" << endl;
    cout << "2. Player vs Player" << endl << endl;
    cout << "Select mode (1 or 2): ";
    while (true) {
        cin >> gameMode;
        if (gameMode == 1 || gameMode == 2) {
            break;
        }
        else {
            cout << "Invalid input!" << endl << endl;
            cout << "1. Player vs CPU" << endl;
            cout << "2. Player vs Player" << endl << endl;
            cout << "Select mode (1 or 2): ";
        }
    }

    //Player1 Ship
    cout << "Player 1! Enter your name: ";
    cin >> p1name;
    cout << endl << "Select from columns A-J and rows 1-10" << endl;
    cout << p1name << ", place your ship (ex. A1): ";
    UserInput(r1, c1);
    p1Board.setShip(r1, c1);
    //CPU Ship
    if (gameMode == 1) {
        int r_cpu = rand() % 10;
        int c_cpu = rand() % 10;
        p2Board.setShip(r_cpu, c_cpu);
        cout << endl << "CPU has hidden its ship." << endl;
    }
    //Player2 Ship
    if (gameMode == 2) {
        int r2;
        int c2;
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "Player 2! Enter your name: ";
        cin >> p2name;
        cout << endl << "Select from columns A-J and rows 1-10" << endl;
        cout << p2name << ", place your ship (ex. A1): ";
        UserInput(r2, c2);
        p2Board.setShip(r2, c2);
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    }

    //The game begins now!
    bool gameOver = false;
    while (!gameOver) {
        //Player1 turn
        cout << "--------------------------------------" << endl;
        cout << "       ENEMY BOARD" << endl;
        p2Board.displayBoard(false);
        cout << "Choose where you want to fire!" << endl;
        while (true) {
            cout << p1name << ", enter coordinates (ex. A1): ";
            UserInput(r1, c1);
            if (p2Board.isAlreadyFired(r1, c1)) {
                cout << "Those coordinates have already been used! Try again." << endl;
            } else {
                break;
            }
        }

        if (p2Board.receiveFire(r1, c1)) {
            cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
            cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
            cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
            cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
            cout << endl << "BOOM! IT'S A DIRECT HIT!" << endl << endl;
            cout << p1name << " wins!" << endl;
            cout << "--------------------------------------" << endl;
            cout << "      WINNING BOARD" << endl;
            p2Board.displayBoard(true);
            break;
        } else {
            if (gameMode == 1) {
                cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
                cout << endl << "Nothing... " << p1name << " missed." << endl;
                cout << "The game continues!" << endl;
            } else {
                cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
                cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
                cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
                cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
                cout << endl << "Nothing... " << p1name << " missed." << endl;
                cout << "The game continues!" << endl << endl;
                cout << "It is now " << p2name << "'s turn." << endl;
                cout << "--------------------------------------" << endl;
                cout << "       YOUR BOARD" << endl;
                p2Board.displayBoard(true);
            }
        }

        cout << "--------------------------------------" << endl;
        if (gameMode == 1) {
        // CPU Turn
            pair<int, int> cpuGuess = cpu.getGuess();
            r1 = cpuGuess.first;
            c1 = cpuGuess.second;
            char cpuColChar = c1 + 'A';
            cout << "CPU fires at " << cpuColChar << r1 + 1 << "!" << endl;
            if (p1Board.receiveFire(r1, c1)) {
                cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
                cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
                cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
                cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
                cout << endl << "BOOM! IT'S A DIRECT HIT!" << endl << endl;
                cout << "CPU wins!" << endl;
                cout << "--------------------------------------" << endl;
                cout << "      WINNING BOARD" << endl;
                p1Board.displayBoard(true);
                break;
            } else {
                cout << endl << endl << "Nothing... CPU missed." << endl;
                cout << "The game continues!" << endl;
                cout << "--------------------------------------" << endl;
                cout << "       YOUR BOARD" << endl;
                p1Board.displayBoard(true);
            }
                            
        } else {
        //Player2 Turn
            cout << "       ENEMY BOARD" << endl;
            p1Board.displayBoard(false);
            cout << "Choose where you want to fire!" << endl;
            while (true) {
                cout << p2name << ", enter coordinates (ex. A1): ";
                UserInput(r1, c1);
                if (p1Board.isAlreadyFired(r1, c1)) {
                    cout << "Those coordinates have already been used! Try again." << endl;
                } else {
                    break;
                }
            }
            if (p1Board.receiveFire(r1, c1)) {
                cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
                cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
                cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
                cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
                cout << endl << "BOOM! IT'S A DIRECT HIT!" << endl << endl;
                cout << p2name << " wins!" << endl;
                cout << "--------------------------------------" << endl;
                cout << "      WINNING BOARD" << endl;
                p1Board.displayBoard(true);
                break;
            } else {
                cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
                cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
                cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
                cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
                cout << endl << "Nothing... " << p2name << " missed." << endl;
                cout << "The game continues!" << endl << endl;
                cout << "It is now " << p1name << "'s turn." << endl;
                cout << "--------------------------------------" << endl;
                cout << "       YOUR BOARD" << endl;
                p1Board.displayBoard(true);
            }
        }
    }

    return 0;
}