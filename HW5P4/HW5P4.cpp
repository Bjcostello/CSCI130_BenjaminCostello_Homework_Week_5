//****************************************************
// Programmer: Benjamin Costello
// Description: Kattis Problem 'Modulo'
// https://open.kattis.com/problems/modulo
// Date: 09/21/22
//****************************************************

#include <cmath>
#include <iomanip>
#include <iostream>
#include <list>
using namespace std;

int main() {

  double WCI, TEMP, WIND_SPEED;

  cout << "|  TEMP C  |   WCI   | WIND SPEED |" << endl;
  cout << "|----------|---------|------------|" << endl;

  for (int a = 2; a <= 10; a = a + 4) // temp loop
  {
    for (int b = 5; b <= 11; b = b + 2) // wind speed loop
    {
      TEMP = a;
      WIND_SPEED = b;
      WCI = (13.12 + (0.6125 * TEMP) - (11.37 * pow(WIND_SPEED, 0.16)) +
             ((0.3965 * TEMP) * pow(WIND_SPEED, 0.16))); // calculation
    }
  }
  return 0;
}