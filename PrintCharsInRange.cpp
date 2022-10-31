#include <iostream>
#include <limits>

using namespace std;

unsigned int get_bound(string bound, int min, int max){
      int input_received;
      while (true){
            cout << "Enter the ASCII code that is the "  << bound << " bound [" << min << " through " << max << "]: ";
            cin >> input_received;
            if (input_received >= min && input_received <= max){
                  return input_received;
            }
            cin.clear(); // reset state
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // consume wrong input
            cout << "Error: Invalid " << bound << " bound, must be number from " << min << " through " << max << endl;
      }
}

int main(){
      unsigned int lower_bound = get_bound("lower", 32, 126);
      unsigned int upper_bound = get_bound("upper", lower_bound, 126);

      cout << endl;
      cout << "The characters with ASCII values in range " << lower_bound << " through " << upper_bound << " are:" << endl;
      cout << endl;

      unsigned int on_char = 0;
      char c;
      for (unsigned int i = lower_bound; i <= upper_bound; i++){
            c = i;
            cout << c;
            on_char++;

            if (on_char == 15){
                  cout << endl;
                  on_char = 0;
            }
            else if (i == upper_bound){
                  cout << endl;
            }
      }

      return 0;
}