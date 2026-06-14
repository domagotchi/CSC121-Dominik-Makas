#include <iostream>
using namespace std;

int main() {
    srand(time(0));
    int N;
    int S;
    int min;
    int max;
    float avg;
    int randomroll;

    cout << "Welcome!" << endl;
    cout << endl;
    cout << "How many dice are you rolling?" << endl;
    cin >> N;
    cout << "How many sides does each die have?" << endl;
    cin >> S;
    
    min = N;
    max = N * S;
    avg = (min + max) / 2.0;

    cout << endl;
    cout << "Here are the statistics for rolling a " << N << "d" << S << ":" << endl;
    cout << "Minimum: " << min << endl;
    cout << "Maximum: " << max << endl;
    cout << "Average: " << avg << endl;
    cout << endl;

    randomroll = (rand() % (max - min + 1)) + N;
    cout << "Here's a random roll: " << endl;
    cout << randomroll << endl;
    cout << endl;
    cout << "Thanks for playing!" << endl;

    return 0;
}
