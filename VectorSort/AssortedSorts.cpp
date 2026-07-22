#include <iostream>
#include <vector>
#include "AssortedSorts.hpp"
using namespace std;

int main() {
    vector<int> set1 = {27, 7, 6, 93, 2, -5};
    vector<string> set2 = {"blue", "red", "orange", "periwinkle", "green"};
    vector<double> set3 = {-1, 2, 3, -4, 5, -6};


    bubbleSort(set1);
    cout << "Bubble Sort array:" << endl;
    for (int bubble_num : set1) {
        cout << bubble_num << "  ";
    }
    cout << endl << endl;
    

    selectionSort(set2);
    cout << "Selection Sort array:" << endl;
    for (const string& selection_word : set2) {
        cout << selection_word << "  ";
    }
    cout << endl << endl;


    insertionSort(set3);
    cout << "Insertion Sort array:" << endl;
    for (int insertion_num : set3) {
        cout << insertion_num << "  ";
    }
    cout << endl << endl;
    
    return 0;
}