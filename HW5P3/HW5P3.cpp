#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {

  int numbers[10];  // list of input values
  int modulo[10];   // modulo list
  int divisor = 42; // modulo divisor
  int num_of_modulo = 10;

  // inputs values to list
  for (int i = 10 - 1; i >= 0; i--) {
    cin >> numbers[i];
  }

  for (int i = 0; i <= 9; i++) {
    modulo[i] = (numbers[i] % divisor);
  }

  for (int i = 0; i <= 9; i++) {
    for (int a = i + 1; a <= 9; a++) {
      if (modulo[i] == modulo[a]) {
        copy(modulo + a,  // copy everything starting here
             modulo + 9,  // and ending here, not including it,
             modulo + i); // to this destination
        num_of_modulo--;
      }
    }
  }
  cout << num_of_modulo;
  return 0;
}