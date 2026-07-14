#include <iostream>
#include <vector>
using namespace std;

//I looked up a way to add all 100 coordinate scenarios for the cpu to choose from using 'deck'

class CPUPlayer {
    private:
        vector<pair<int, int>> deck;

    public:
        CPUPlayer() {
            for (int r = 0; r < 10; ++r) {
                for (int c = 0; c < 10; ++c) {
                    deck.push_back({r, c});
                }
            }
        }

        pair<int, int> getGuess() {

            int index = rand() % deck.size();
            pair<int, int> guess = deck[index];
            deck.erase(deck.begin() + index);
            return guess;
        }
};