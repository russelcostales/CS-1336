#include <iostream>
#include <array>
#include <cmath>

using namespace std;

int arr[1000000] = {};

int binary_search(int trgt, int start, int end){
      int found;

      int iter_0 = start;
      int iter_1 = end;

      int at_index = 0;
      int steps = 0;

      while (found != trgt){
            int mid = floor((iter_0+iter_1)/2);

            if (trgt > arr[mid]){
                  iter_0 = mid;
            }
            else if (trgt < arr[mid]) {
                  iter_1 = mid;
            }    
            else {
                  found = trgt;
                  at_index = mid;
            }
            cout << mid << endl;
            steps++;
      }

      cout << "Binary search iterations taken: " << steps << endl;

      return at_index;
}


int linear_search(int trgt){
      int iter = 0;
      int steps = 0;

      for (iter = 0; iter < 1000000; iter++){
            steps++;

            if (trgt == arr[iter]){
                  break;
            }
      }

      cout << "Linear search iterations taken: " << steps << endl;

      return iter;
}


int main(){
      for (int i = 0; i < 1000000; i++){
            arr[i] = i+1;
      }

      int target = 80553;

      cout << "Processing.." << endl;

      int index_in_arr = binary_search(target, 0, 1000000);

      cout << "Character '" << target << "' found in Index: " << index_in_arr << endl;

      index_in_arr = linear_search(target);

      cout << "Character '" << target << "' found in Index: " << index_in_arr << endl;

      return 0;
}