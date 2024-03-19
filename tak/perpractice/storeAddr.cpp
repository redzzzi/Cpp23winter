#include <iostream>

int main() {
  int Age = 30;
  int* pInteger = &Age;

  std::cout << "The address of Age : " << pInteger << std::endl;

  return 0;
}
