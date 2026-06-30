#include <iostream>
#include "TimesAreChanging.hpp"
using namespace std;

int main() {
    int hour1, min1, hour2, min2;

    cout << "Hello! Please enter time 1 (Enter in HH MM format): ";
    cin >> hour1 >> min1;
    cout << "Enter time 2 (Enter in HH MM format): ";
    cin >> hour2 >> min2;

    int totalMinutes = calculateIntervalMinutes(hour1, min1, hour2, min2);

    int hoursPart, minutesPart;
    minutesToHoursAndMinutes(totalMinutes, hoursPart, minutesPart);

    double decimalHours = minutesToDecimalHours(totalMinutes);

    cout << "\nTime interval:" << endl;
    cout << "Difference in minutes: " << totalMinutes << endl;
    cout << "Difference in hours / minutes: " << hoursPart << " hours, " << minutesPart << " minutes" << endl;
    cout << "Difference in hours: " << decimalHours << endl;
    cout << endl;
    cout << "Thanks for checking my program!" << endl;

    return 0;
}
