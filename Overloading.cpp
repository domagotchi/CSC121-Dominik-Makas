#include <iostream>
using namespace std;

void print_type(int value) {
  cout << "This is an int with the value of " << value << endl;
}

void print_type(double value) {
  cout << "This is a double with the value of " << value << endl;
}

void print_type(char value) {
  cout << "This is a char with the value of " << value << endl;
}

void print_type(string value) {
  cout << "This is a string with the value of " << value << endl;
}


int main() {
  print_type('a');

  return 0;
}
