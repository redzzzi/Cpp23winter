// 문제 3
// N이 제곱수이면 1을 반환하고 제곱수가 아니면 0을 반환하는 함수
// func3(int N)을 작성하라. N은 10억 이하의 자연수이다.
#include <iostream>
#include <cmath>
using namespace std;

int func3(int N) {
  double root = sqrt(N);
  if (root == static_cast<int>(root)) {
    return 1;
  }
  return 0;
}

int main() {
  int N = 0;
  cout << "number: ";
  cin >> N;
  cout << "func3(" << N << ") = " << func3(N) << endl; 
  return 0;
}
