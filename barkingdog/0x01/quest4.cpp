// 문제 4
// N 이하의 수 중에서 가장 큰 2의 거듭제곱수를 반환하는 함수
// func4(int N)을 작성하라. N은 10억 이하의 자연수이다.
#include <iostream>
#include <cmath>
using namespace std;

int func4(int N) {
  int i = 0;
  while (pow(2, i) <= N) {
    i++;
  }
  return pow(2, i-1);
}

int main() {
  int number = 0;
  cout << "number: ";
  cin >> number;
  cout << "func4(" << number << ") = " << func4(number) << endl;
  return 0;
}
