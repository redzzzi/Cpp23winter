// 01-1 두 개의 정수를 입력 받고 그 사이의 정수 합 계산
#include <iostream>

int main() {
  int val1, val2;
  std::cout << "Type two numbers." << std::endl;
  std::cin >> val1 >> val2;

  int result = 0;
  if (val1 < val2) {
    for (int i=val1+1; i<val2; i++) {
      result += i;
    }
  } else {
    for (int i=val2+1; i>val2; i--) {
      result += i;
    }
  }
  std::cout << "The result is " << result << "." << std::endl;
  return 0;
}
