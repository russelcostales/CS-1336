#include <iostream>
#include <string>
#include <sstream>
#include <cmath>

using namespace std;
int array[1000];
int numItems = 0;

int sequentialSearch(int item) {
    for(int i=0; i<numItems; i++)
        if (item == array[i])
            return i;

    return -1;
}

int binarySearch(int item) {
      int iter_0 = 0;
      int iter_1 = numItems - 1;

      while (iter_1 >= iter_0){
            int mid = (iter_0+iter_1)/2;

            if (item > array[mid]){
                  iter_0 = mid + 1;
            }
            else if (item < array[mid]) {
                  iter_1 = mid - 1;
            }    
            else {
                  return mid;
            }
      }

      return -1;
}

int main() {
      string line;
      getline(cin, line);
            
      istringstream sinput(line);
      int i=0;
      while (sinput >> array[i])
            i++;
      numItems = i;

      int searchItem;
      cin >> searchItem;
      int index = binarySearch(searchItem);
      if (index >= 0)
            cout << searchItem << " found at index " << index;
      else
            cout << searchItem << " not found!";
}
