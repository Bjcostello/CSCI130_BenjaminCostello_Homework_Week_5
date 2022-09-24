#include <cmath>
#include <fstream>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {

  int dataTemp;
  int sumdata = 0;
  int counter = 0;

  // load input file
  ifstream inFile; // declare stream variable
  inFile.open("NumberData1.txt");

  // load all data in while loop
  while (!inFile.eof()) {
    inFile >> dataTemp;
    // cout << dataTemp << endl;

    // check to see if data is valid
    if (dataTemp >= 0) {
      // update cumulative value of all data and number of data points loaded
      sumdata = sumdata + dataTemp;
      counter++;
    } else {
      cout << "Negative value encoutnered of " << dataTemp << "." << endl;
      cout << "Will not use rest of the data. . ." << endl;

      cout << "The sum of valid data is: " << sumdata << endl;
      cout << "The number of valid data points is: " << counter << endl;
      cout << "The average of the valid data is: "
           << (static_cast<double>(sumdata) / counter) << endl;

      break;
    }
  }

  return 0;
}