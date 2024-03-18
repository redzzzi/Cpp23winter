#include <iostream>
#include <string>

int main() {
  int inputNumber = 0;
  std::cin >> inputNumber;
  std::cout << "int a;" << std::endl << "int *ptr = &a;" << std::endl;
  for (int i=2; i<=inputNumber; i++) {
    std::cout << "int " << std::string(i, '*') << "ptr" << i << "= &ptr" << i-1 << ";" << std::endl;
  }
  return 0;
}
