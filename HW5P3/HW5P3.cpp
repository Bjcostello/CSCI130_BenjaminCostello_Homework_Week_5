#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {

  int numbers[10];

  // inputs values to list
  for (int i = 10 - 1; i >= 0; i--) {
    cin >> numbers[i];
  }

  
  for (int i = 10 - 1; i >= 0; i--)
    cout << numbers[i];
  // if numbers
  //[i] == numbers[0] {}
  return 0;
}