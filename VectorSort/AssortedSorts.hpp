#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& v) {
    int n = v.size();
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (v[j] < v[j + 1]) {
                swap(v[j], v[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}

void selectionSort(vector<string>& v) {
    int n = v.size();
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (v[j].length() < v[minIndex].length()) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(v[i], v[minIndex]);
        }
    }
}

void insertionSort(vector<double>& v) {
    int n = v.size();
    for (int i = 1; i < n; i++) {
        double key = v[i];
        double keyAbs = abs(key);
        int j = i - 1;
        while (j >= 0 && abs(v[j]) > keyAbs) {
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = key;
    }
}