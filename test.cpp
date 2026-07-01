#include <iostream>
#include <chrono>
#include <vector>
// try for pausing suspense --- #include <thread>
using namespace std;

int main() {
  srand(time(nullptr));

  vector<string> outcomes = {
  "death",
  "bubbleshield",
  "bubbleshield",
  "$1000",
  "$1000",
  "$1000",
  "$1000",
  "$1000",
  "$20000"
  };

  int rounds = 0;
  int earnings = 0;
  char start;
       ___

  ,-'RIP'-,
  | .---. |
  |( # # )_\|/_
  | | # | | /
  | :+++: |/
  |  `|`  /




  cout << "Welcome... to the game of Doors." << endl;
  cout << "You will be introduced to three diffent doors. If you decide to play..." << endl;
  cout << "each correct door earns you $1,000. But pick the wrong door?" << endl;
  cout << "Rest in Peace." << endl;
  cout << endl;
  cout << "Dare to play? (Press 'Y' to advance)" << endl;
  cin >> start
  cout << endl;

  if (start.toupper == "Y") {
    string dooroutcome = "";
    char doorchoice;
    int bubble = 0;

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
        rounds += 1;
        cout << "Behind door " << doorchoice << ", you find..." << endl;
        cout << "$1,000!" << endl;
        earnings += 1000;
        cout << endl;
        cout << "You advance to the next room..." << endl;
      }

      if (dooroutcome == "$20000") {
        rounds += 1;
        cout << "Behind door " << doorchoice << ", you find..." << endl;
        cout << "JACKPOT!" << endl;
        cout << "You found $20,000!" << endl;
        earnings += 20000;
        cout << endl;
        cout << "You advance to the next room..." << endl;
      }

      if (dooroutcome == "bubbleshield") {
        rounds += 1;
        cout << "Behind door " << doorchoice << ", you find..." << endl;
        cout << "a bubble shield!" << endl;
        if (bubble > 0) {
          cout << "Oh, it seems, you still have an unused bubble shield... you leave the extra shield" << endl;
          cout << "You advance to the next room..." << endl;
        }
        if (bubble = 0) {
          cout << "This is a one-time-use tool that will save you from a death door." << endl;
          bubble += 1;
          cout << "You advance to the next room..." << endl;
        }
      }

      if (dooroutcome == "death") {
        rounds += 1;
        cout << "Behind door " << doorchoice << ", you find..." << endl;
        cout << "A DEATH DOOR!" << endl;
        if (bubble > 0) {
          cout << "You lucked out this time... you used and disposed of the bubble shield."
          bubble *= 0
          cout << "You advance to the next room..." << endl;
        }
        if (bubble = 0) {
          cout << "You have pressed your luck and met your end." << endl;
          cout << "You are now dead..." << endl;
          earnings *= 0;
          break;
        cout << endl;
        }
          
  else {
    cout << "You live to see another day..." << endl;
    cout << endl;
  }

//Exit message
  cout << "__________________" << endl;
  cout << "FINAL SCORE:" << endl;
  cout << endl;
  if (doorcoutcome == "death") {
    cout << "You died! Better luck next time." << endl;
  }
  else {
    cout << "You left with $" << earnings << "!" << endl;
    if (earnings >= 10000) {
      cout << "Congrats! You could by a second-hand Subaru... loser." << endl;
    }
    else if (earnings >= 25000) {
      cout << "Not bad... hope to see you again in the game of Doors..." << endl;
    else if (earnings >= 50000) {
      cout << "A good haul! Hopefully you put it to good use..." << endl;
    else {
      cout << "You played like a true risk-taker! Invest wisely..." << endl;
    }
  }

return 0;
}

