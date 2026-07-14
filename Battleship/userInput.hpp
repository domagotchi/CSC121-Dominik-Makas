#include <iostream>
using namespace std;

//This is how i will translate friendly user inputs to board coordinates...
//this is also how I will make sure users are correctly inputting the coordinates

void UserInput(int &row, int &col) {
    char colChar;
    int rowInput;
    while (true) {
        cin >> colChar >> rowInput;
        colChar = toupper(colChar);

        col = colChar - 'A';
        row = rowInput - 1;

        if (col >= 0 && col <= 9 && row >= 0 && row <= 9) {
            break;
        }
        cout << "Invalid input!" << endl << endl;
        cout << "Please enter a letter A-J and number 1-10: ";
    }
}