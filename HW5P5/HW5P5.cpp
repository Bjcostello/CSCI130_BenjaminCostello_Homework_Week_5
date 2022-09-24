#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  int L;
  double A, B, totalArea, Cost, totalCost;

  cin >> Cost; // cost per square meter of lawn
  cin >> L;    // # of lawns to mow

  while (L != 0) {
    cin >> A >> B; // length and width of a lawn

    totalArea = totalArea + (A * B);
    L--;
  }
  totalCost = (totalArea * Cost);
  cout << fixed;
  cout << setprecision(8) << totalCost;
  return 0;
}