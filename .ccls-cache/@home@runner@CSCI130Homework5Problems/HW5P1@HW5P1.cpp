//****************************************************
// Programmer: Benjamin Costello
// Description: Test loading a *.dat file. Follows the handout
// EOF_While_FileImport.pdf.
// Date: 09/2/22
//****************************************************

// Libraries
#include <cmath>
#include <fstream>
#include <iomanip>
#include <iostream>
using namespace std;

// Main code
int main() {

  // declare vars
  string firstName;
  string date;
  int TestResult;
  int count = -1;
  int cumulative_cases = 0;

  // setup
  ifstream infile;  // access file
  ofstream outfile; // save results of analysis

  // char ch;                            // read in chars

  infile.open("TestResultsData.dat"); // Open file

  // check date
  infile >> date;
  cout << date << endl;

  // validate first 2 pieces of information
  // infile >> firstName;
  // cout << firstName << ' ';
  // infile >> TestResult;
  // cout << TestResult << endl;

  //'!' inverts boolean. Stops when end of file is reached
  while (infile) {
    // update number of cases & persons tested
    cumulative_cases = cumulative_cases + TestResult;
    count++; // increment the number of patients

    // read next line
    infile >> firstName;
    infile >> TestResult;
  }
  cout << "Total Number Of Cases = " << cumulative_cases << endl;
  cout << "Number Of Persons Tested = " << count << endl;
  infile.close();
  return 0;
}