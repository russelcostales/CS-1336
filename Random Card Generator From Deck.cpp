// Random Card Generator from Deck
// Russel Costales
// September 22, 2022

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
      srand(time(0));

      string deck[52] = {};
      string suits[4] = {"Clubs", "Diamonds", "Hearts", "Spades"};
      string rank[13] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King", "Ace"};

      // Utilize a loop to create the deck by creating one of each rank per suit.
      int iter = 0;
      for (int x = 0; x < 13; x++){
            for (int y = 0; y < 4; y++){
                  deck[iter] = rank[x] + " of " + suits[y];
                  iter++;
            }
      }

      // Used to test multiple pulls of a random card from the deck.
      //for (int i = 0; i < 500; i++){
            //int random = rand()%53;
            //cout << random << endl;
      cout << deck[random] << endl;
      //}

      return 0;
}