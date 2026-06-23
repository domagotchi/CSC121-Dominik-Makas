#include <iostream>
using namespace std;

int main() {

    srand(time(0));
    string user_pokemon;
    string battle1_pokemon;

//Stat variables
    int hp;
    int atk;
    int spa;
    int def;
    int spd;
    int spe;


    int opp_hp;
    int opp_atk;
    int opp_def;
    int opp_spa;
    int opp_spd;
    int opp_spe;

//All Possible Pokemon in the program
    "Venusaur",
    "Charizard",
    "Blastoise",
    "Snorlax",
    "Jolteon",
    "Mew",
    "Machamp",
    "Gengar",

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
    if (user_pokemon == "Venusaur") {
        hp = 301;
        atk = 200;
        def = 202;
        spa = 236;
        spd = 236;
        spe = 196;
    }
    if (user_pokemon == "Charizard") {
        hp = 297;
        atk = 204;
        def = 192;
        spa = 254;
        spd = 206;
        spe = 236;        
    }
    if (user_pokemon == "Blastoise") {
        hp = 299;
        atk = 202;
        def = 236;
        spa = 206;
        spd = 246;
        spe = 192;
    }
    if (user_pokemon == "Snorlax") {
        hp = 461;
        atk = 256;
        def = 166;
        spa = 166;
        spd = 256;
        spe = 96;
    }
    if (user_pokemon == "Jolteon") {
        hp = 271;
        atk = 166;
        def = 156;
        spa = 256;
        spd = 296;
    }
    if (user_pokemon == "Mew") {
        hp = 341;
        atk = 236;
        def = 236;
        spa = 236;
        spd = 236;
        spe = 236;
    }
    if (user_pokemon == "Machamp") {
        hp = 321;
        atk = 296;
        def = 196;
        spa = 166;
        spd = 206;
        spe = 146;
    }
    if (user_pokemon == "Gengar") {
        hp = 261;
        atk = 166;
        def = 156;
        spa = 296;
        spd = 186;
        spe = 256;
    }

//Opponent stats
    while (battle1_pokemon == "" || battle1_pokemon == user_pokemon) {
        battle1_pokemon = rand;
    }
