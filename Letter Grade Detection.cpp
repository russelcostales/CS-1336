#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
      srand(time(0));

      string deck[52] = {};
      string suits[4] = {"Clubs", "Diamonds", "Hearts", "Spades"};
      string rank[13] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King", "Ace"}

      cout << rand() << endl;

      return 0;
}