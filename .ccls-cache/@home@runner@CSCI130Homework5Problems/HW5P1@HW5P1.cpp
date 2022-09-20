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

  // setup
  ifstream infile;      // Declare inputs stream var
  char ch;              // read in chars
  infile.open("aSuperSong.dat"); // Open file
  infile.get(ch);       // get the first character


  while(!infile.eof()) // '!' inverts boolean. Stops when end of file is reached
    {
      cout << ch;     //displays character
      infile.get(ch); //get next character
    }
  return 0;
}