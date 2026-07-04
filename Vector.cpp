#include <iostream>
#include <vector> 
using namespace std;

int main() {
    
    
    //Sum
    vector<int> numbers = {1, 2, 3, 4, 5};
    int sum = 0;
    int num;
    for (int num : numbers) {
        sum = sum + num;
    }
    cout << "Sum of all numbers: " << sum << endl;


    //Reverse
    vector<int> reverse(numbers.rbegin(), numbers.rend());
    cout << "Numbers in reverse: ";
    for (int num : reverse) {
        cout << num << " ";
    }
    cout << endl;


    //Zippity zappity
    vector<int> vector1 = {1, 2, 3};
    vector<int> vector2 = {4, 8};
    vector<int> zipped;
    size_t maxSize = max(vector1.size(), vector2.size());
    for (size_t i = 0; i < maxSize;  ++i) {
        if (i < vector1.size()) zipped.push_back(vector1[i]);
        if (i < vector2.size()) zipped.push_back(vector2[i]);
    }    
    cout << "Numbers zipped together: ";
    for (int num : zipped) {
        cout << num << " ";
    }
    cout << endl;



    return 0;
}
