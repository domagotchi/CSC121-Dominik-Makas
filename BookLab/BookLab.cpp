#include <iostream>
#include <fstream>
using namespace std;

string checkAllWords(const string& input) {
    string cleaned;
    for (char c : input) {
        if (isalpha(c)) {
            cleaned += tolower(c);
        }
    }
    return cleaned;
}

int main() {
    ifstream file("MobyDick.txt");
    if (!file.is_open()) {
        cerr << "txt file was not opened..." << endl;
        return 1;
    }

    string w;
    string bookname;
    size_t love = 0; 
    string z_right = "";

    getline(file, bookname);
    while (file >> w) {
        string cleaned = checkAllWords(w);
        if (cleaned == "love") {
            love++;
        }
        if (!cleaned.empty() && cleaned[0] == 'z') {
            z_right = cleaned;
        }
    }

    file.close();
    
    cout << "Book name: " << bookname << endl;
    cout << "Love count: " << love << endl;
    cout << "Last Z word: " << z_right << endl;


    return 0;
}
