#include <iostream>
using namespace std;

int main() {
  float resistor1, resistor2;
  float series;
  float parallel;

  cout << "Hi!" << endl;
  cout << "Enter the value of the first resistor: ";
  cin >> resistor1;
  cout << "Enter the value of the second resistor: ";
  cin >> resistor2;

  series = resistor1 + resistor2;
  parallel = (resistor1 * resistor2) / (resistor1 + resistor2);

  cout << "The total resistance in series is: " << series << endl;
  cout << "The total resistance in parallel is: " << parallel << endl;


  return 0;
}