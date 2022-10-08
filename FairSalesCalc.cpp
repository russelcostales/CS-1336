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
      string rank[13] = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};

      // Utilize a loop to create the deck by creating one of each rank per suit.
      int iter = 0;
      for (int x = 0; x < 4; x++){
            for (int y = 0; y < 13; y++){
                  deck[iter] = rank[y] + " of " + suits[x];
                  iter++;
                  cout << rank[y] + " of " + suits[x] << endl;
            }
      }
      
      int pull;
      cin >> pull;

      // Used to test multiple pulls of a random card from the deck.
      //for (int i = 0; i < 500; i++){
      //int random = rand()%53;
            //cout << random << endl;
      cout << "The card you picked is " << deck[pull] << endl;
      //}

      return 0;
}