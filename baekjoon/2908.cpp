#include <iostream>

int reverse(int number) {
  int oriHun = number % 1000 / 100;
  int oriTen = number % 100 / 10;
  int oriOne = number % 10;
  return oriOne * 100 + oriTen * 10 + oriHun;
}

int main() {
  int num1 = 0, num2 = 0;
  std::cin >> num1 >> num2;
  std::cout << (reverse(num1)<reverse(num2)?reverse(num2):reverse(num1)) << std::endl;
  return 0;
}
