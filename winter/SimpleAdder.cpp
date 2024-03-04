// 01-1 scanf를 대신하는 데이터의 입력
// 입력받은 숫자의 덧셈 출력
#include <iostream>

int main() {
  int val1, val2;
  std::cout << "1st number : ";
  std::cin >> val1;
  std::cout << "2nd number : ";
  std::cin >> val2;

  int result = val1 + val2;
  std::cout << "The result is " << result << std::endl;
  
  return 0;
}
