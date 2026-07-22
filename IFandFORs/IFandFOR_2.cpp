#include <iostream>
using namespace std;

int main() {
    cout << "Wanna watch me count to 100?" << endl;

    string answer;
    cin >> answer; 
    
    if (answer != "yes") {
        cout << "Too bad, I'm counting anyway!" << endl;
    }
    cout << endl;

    for (int i = 1; i <= 100; i++) {
        cout << i << " ";
    }

    return 0;
}
