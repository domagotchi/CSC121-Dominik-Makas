#include <iostream>
using namespace std;

int main() {

//Stats
    srand(time(0));
    string user_pokemon;
    string battle1_pokemon;
    string battle2_pokemon;
    string battle3_pokemon;
    int hp;
    int atk;
    int spa;
    int def;
    int spd;
    int spe;

//All Possible Pokemon in the program
    "Venasaur",
    "Charizard",
    "Blastoise",
    butterfree
    beedrill
    pidgeot
    raticate
    "Snorlax",

//Choose your Pokemon
    cout << "Welcome to the world of Pokemon!" << endl;
    cout << "Choose your Pokemon:" << endl;
    cout << endl;
    string choice1 = rand;
    string choice2 = rand;
    string choice3 = rand;
    string choice = "0"
    cout << "1) " << choice1 << endl;
    cout << "2) " << choice2 << endl;
    cout << "3) " << choice3 << endl;
    
    while (choice != "1" && choice != "2" && choice != "3") {
        cin >> choice;
        if (choice != "1" && choice != "2" && choice != "3") {
            cout << "Invalid input..." << endl;
            cout << "Select your Pokemon by entering '1', '2', or '3'." << endl;
        }
    }
    if (choice == "1") {user_pokemon = choice1}
    if (choice == "2") {user_pokemon = choice2}
    if (choice == "3") {user_pokemon = choice3}

    cout << endl;
    cout << "Congratulations!" << endl;
    cout << "You obtained " << user_pokemon << "!" << endl;

//Starter stats

