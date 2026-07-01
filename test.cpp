#include <iostream>
#include <chrono>
#include <vector>
// try for pausing suspense --- #include <thread>
using namespace std;

int main() {
  

  vector<string> outcomes = {
  "death",
  "bubbleshield",
  "$1000",
  "$1000",
  "$1000",
  "$1000",
  "$1000",
  "$1000",
  "$20000"
  };

  char start;

  cout << "Welcome... to the game of Doors." << endl;
  cout << "You will be introduced to three diffent doors. If you decide to play..." << endl;
  cout << "each correct door earns you $1,000. But pick the wrong door?" << endl;
  cout << "Rest in Peace." << endl;
  cout << endl;
  cout << "Dare to play? (Press 'Y' to advance)" << endl;
  cin >> start
  cout << endl;

  if (start.toupper == "Y") {
    int earnings = 0;
    string dooroutcome = "";
    char doorchoice;

    while (dooroutcome != "death") {
      cout << "Three doors stand before you... which will you choose?
      cout << "Door 1 (Press '1')" << endl;
      cout << "Door 2 (Press '2')" << endl;
      cout << "Door 3 (Press '3')" << endl;
      cout << "Press any other key to retreat with your earnings..." << endl;
      cout << endl;
      cin >> doorchoice;

      string door1 = outcomes[rand() % outcomes.size()];
      string door2 = outcomes[rand() % outcomes.size()];
      string door3 = outcomes[rand() % outcomes.size()];

      if (doorchoice == "1") {dooroutcome = door1;}
      if (doorchoice == "2") {dooroutcome = door2;}
      if (doorchoice == "3") {dooroutcome = door3;}
      else {
        cout << "Retreating..." << endl;
        break;

      if (dooroutcome == "$1000") {
        cout << "Behind door " << doorchoice << ", you find..." << endl;
        cout << "$1,000!" << endl;
        earnings += 1000
      }
      if (dooroutcome == "$20000") {
        cout << "Behind door " << doorchoice << ", you find... oh?" << endl;
        cout << "JACKPOT!" << endl;
        cout << "You found $20,000!" << endl;
        earnings += 20000
      }
      
      
      
      
      
      
      
      
      
      
      }

  else {
    cout << "You live to see another day..." << endl;
  }

//Exit message


