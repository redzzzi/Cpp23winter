// Coding Test 12/5 - Exchange
// korean money - dollars
// should exchange formed with "H(100) F(50) T(10) U(1)"
// calculated one < 100 euro -> commission fee: 1 euro
#include <iostream>
using namespace std;

int main() {
  int kor = 0, eu = 0;
  while ((cin >> kor)) {
    cin >> eu;

    int H = 0, F = 0, T = 0, U = 0;
    int div = eu / kor;
    // cout << "whole div: " << div << '\n';
    if (div < 100) {
      div--;
    } 
    H = div / 100;
    if (H < 0) {
      U = 0;
    }
    // cout << "div: " << div << '\n';
    div -= H * 100;
    F = div / 50;
    if (F < 0) {
      U = 0;
    }
    // cout << "div: " << div << '\n';
    div -= F * 50;
    T =  div / 10;
    if (T < 0) {
      U = 0;
    }
    // cout << "div: " << div << '\n';
    div -= T * 10;
    U = div / 1;
    if (U < 0) {
      U = 0;
    }
    // cout << "div: " << div << '\n';
    cout << H << ' ' << F << ' ' << T << ' ' << U << '\n';
    return 0;
  }
}
