#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

const char EMPTY = '-';
const int ROWS = 6;
const int COLUMNS = 7;
// six seeeeven
const string SAVE = "c4_save1.txt";
int xCount = 0;
int oCount = 0;
const char PLAYER_X = 'X';
const char PLAYER_O = 'O';


void gameSave(const vector<vector<char>>& board) {
    ofstream outFile(SAVE);
    if (outFile.is_open()) {
        for (int r = 0; r < ROWS; ++r) {
            for (int c = 0; c < COLUMNS; ++c) {
                outFile << board[r][c];
            }
            outFile << endl;
        }
        outFile.close();
        cout << "The game has been saved." << endl;
    } else {
        cout << "WARNING" << endl;
        cout << "Current game could not be saved." << endl;
    }
}

bool gameLoad(vector<vector<char>>& board, char& PLAYER_CURRENT) {

    ifstream inFile(SAVE);
    if (!inFile.is_open()) {
        cout << "No save game was found." << endl << endl;
        cout << "Starting a new game..." << endl;
        return false;
    }

    for (int r = 0; r < ROWS; ++r) {
        string line;
        if (getline(inFile, line) && line.length() >= COLUMNS) {
            for (int c = 0; c < COLUMNS; ++c) {
                board[r][c] = line[c];
                if (board[r][c] == PLAYER_X) xCount++;
                if (board[r][c] == PLAYER_O) oCount++;
            }
        } else {
            cout << "Unable to load save file. Starting a new game..." << endl;
            board = vector<vector<char>>(ROWS, vector<char>(COLUMNS, EMPTY));
            return false;
        }
    }


    PLAYER_CURRENT = (xCount > oCount) ? PLAYER_X : PLAYER_O;
    cout << "Previous game has been loaded..." << endl;
    cout << endl;

    return true;
}