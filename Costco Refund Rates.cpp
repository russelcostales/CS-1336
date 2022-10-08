#include <iostream>
#include <iomanip>
using namespace std;

int main(){
      double n;
      cin >> n;

      int ranges[13] = {97, 94, 90, 87, 84, 80, 77, 74, 70, 67, 64, 60};
      int grades[13] = {"A+", "A", "A-", "B+", "B", "B-", "C+", "C", "C-", "D+", "D", "D-", "F"};

      for (int i = 1; i < 13; i++){
            if (n >= ranges[i]){
                  cout << "Final grade: " << grades[i] << endl;
            }
      }

      return 0;
}