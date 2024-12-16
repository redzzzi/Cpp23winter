// 문제 1
// N 이하의 자연수 중에서 3의 배수이거나 5의 배수인 수를 모두 합한 값을
// 반환하는 함수 func1(int N)을 작성하라. N은 10만 이하의 자연수이다.
#include <iostream>
using namespace std;

int func1(int N) {
  if (N == 0) {
    return 0;
  }
  if ((N % 3 == 0) || (N % 5 == 0)) {
    return N + func1(N-1);
  } else {
    return func1(N-1);
  }
}

int main() {
  int number = 0;
  cin >> number;
  cout << func1(number) << endl;
  return 0;
}
