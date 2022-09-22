#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {

  int numbers[10]; // list of values
  int a = 0;       // for us in for loop

  // inputs values to list
  for (int i = 10 - 1; i >= 0; i--) {
    cin >> numbers[i];
  }

  for (int i = 0; i <= 9; i++) {
    if (numbers[i] == numbers[a]) {
      //[i] == numbers[0]
    } else {
      for (int a = 0; a <= 9; a++)
        cout << numbers[i] << " " << numbers[a] << endl;
      if (numbers[i] == numbers[a]) {
        copy(numbers + 3,  // copy everything starting here
             numbers + 9,  // and ending here, not including it,
             numbers + 2); // to this destination
        cout << "New list is: ";
        for (int c = 0; c <= 9; c++)
          cout << numbers[c];
      }
    }
  }
  return 0;
}