#include <iostream>
using namespace std;


//FUNCTION1
int positive_even () {
    int number = -1;

    while (number <= 0 || number % 2 > 0) {
        while (number <= 0) {
            cout << "Hello! Input a number that is positive and even: ";
            cin >> number;

            if (number <= 0) {
                cout << "This number is not positive." << endl;
            }
        }

        while (number % 2 > 0) 
            if (number % 2 > 0) {
                cout << "This number is not even." << endl;
                cout << "Input a number that is positive and even: " << endl;
                cin >> number; 
        }
    }    

 return number;
}


//FUNCTION2
void capitalize(string &s, int n) {
    if (n >= 0 && n < s.size()) {
        s[n - 1] = toupper(s[n - 1]);
    }
}

//FUNCTION 3
string create_acronym() {
    string acronym = "";
    string word;

    while (true) {
        cout << "Enter a word (or press Enter to stop): ";
        getline(cin, word);

        if (word.empty()) {
            break;
        }

        acronym += toupper(word[0]);
        acronym += '.';
    }

    return acronym;
}

int main () {
  //PART1
    int number = positive_even();
    cout << "Your number is: " << number << endl;
    cout << "Nice! Let's move to the next..." << endl;
    cout << endl;

  //PART2
    string str;
    int n;
    cout << "Input word" << endl;
    cin >> str;
    cout << "Input n" << endl;
    cin >> n;
    capitalize(str, n);
    cout << str << endl;
}

int main2() {
    string result = create_acronym();
    cout << "Acronym: " << result << endl;
    return 0;
}
