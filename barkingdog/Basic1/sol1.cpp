#include <iostream>
using namespace std;

int func1(int N) {
  int ret = 0;
  for (int i=1; i<=N; i++) {
    if (i % 3 == 0 || i % 5 == 0) ret += i;
  }
  return ret;
}

int main() {
  int number = 0;
  cin >> number;
  cout << func1(number) << endl;
  return 0;
}
