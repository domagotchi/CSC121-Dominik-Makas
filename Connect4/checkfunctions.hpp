#include <iostream>
#include <vector>
using namespace std;

bool checkDirection(const vector<vector<char>>& board, int r, int c, int hor, int vert, char token) {
    const char EMPTY = '-';
    const int ROWS = 6;
    const int COLUMNS = 7;
    // six seeeeven
    int count = 1;
    int i = r + hor;
    int j = c + vert;
    while (i >= 0 && i < ROWS && j >= 0 && j < COLUMNS && board[i][j] == token) {
        count++;
        i += hor;
        j += vert;
    }


    i = r - hor;
    j = c - vert;
    while (i >= 0 && i < ROWS && j >= 0 && j < COLUMNS && board[i][j] == token) {
        count++;
        i -= hor;
        j -= vert;
    }


    return count >= 4;
}


bool checkWin(const vector<vector<char>>& board, int r, int c) {
    char token = board[r][c];
    
    return (
    checkDirection(board, r, c, 1, 0, token) || 
    checkDirection(board, r, c, 0, 1, token) || 
    checkDirection(board, r, c, 1, 1, token) || 
    checkDirection(board, r, c, 1, -1, token)
    );
}