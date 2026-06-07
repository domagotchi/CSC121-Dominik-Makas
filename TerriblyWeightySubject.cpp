#include <iostream>
using namespace std;

int main() {
  int oz;
  int lbs;
  int ozlbs;
  float lbsDecimal;

 

  cout << "Input number of ounces: ";
  cin >> oz;
  cout << "You entered " << oz << " ounces." << endl;
  cout << "Converting to pounds..." << endl;
  cout << "." << endl;
  cout << "." << endl;
  cout << "." << endl;

  lbs = oz / 16;
  ozlbs = oz % 16;
  lbsDecimal = oz / 16.0;
  cout << "That is " << lbs << " pounds and " << ozlbs << " ounces." << endl;
  cout << "That is " << lbsDecimal << " pounds." << endl;

  cout << "Goodbye." << endl;

  return 0;
}