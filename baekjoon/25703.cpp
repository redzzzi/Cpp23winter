#include <iostream>
<<<<<<< HEAD
=======
#include <string>
>>>>>>> c04ee7b88284d700e96fc21281af67dc36eba4e7

int main() {
  int inputNumber = 0;
  std::cin >> inputNumber;
  std::cout << "int a;" << std::endl << "int *ptr = &a;" << std::endl;
<<<<<<< HEAD

  for (int i=2; i<=inputNumber; i++) {
    std::cout << "int ";
    for (int j=0; j<i; j++) {
      std::cout << "*";
    } 
    std::cout << "ptr" << i << " = &ptr";
    if (i == 2) {
      std::cout << ";" << std::endl;
    } else {
      std::cout << i-1 << ";" << std::endl;
    }
=======
  for (int i=2; i<=inputNumber; i++) {
    std::cout << "int " << std::string(i, '*') << "ptr" << i << " = &ptr" << i-1 << ";" << std::endl;
>>>>>>> c04ee7b88284d700e96fc21281af67dc36eba4e7
  }
  return 0;
}
