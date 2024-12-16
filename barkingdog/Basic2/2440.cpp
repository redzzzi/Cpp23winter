// 별 찍기-3 - 브론즈4
#include <iostream>
using namespace std;

int main() {
  int star;
  cin >> star;
  for (int i=star; i>=0; i--) {
    for (int j=0; j<i; j++) {
      cout << "*";
    }
    cout << '\n';
  }
  return 0;
}
