#include <iostream>
using namespace std;

int main() {

  int n, rn = 0, rmdr;

  cout << "Enter integer: ";
  cin >> n;

  while(n != 0) {
    rmdr = n % 10;
    rn = rn * 10 + rmdr;
    n = n/10;
  }

  cout << "Reversed Number = " << rn;

  return 0;
}