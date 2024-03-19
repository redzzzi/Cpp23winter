#include <iostream>

int main() {
  int Age = 30;
  int* pInteger = &Age;

  std::cout << "The address of Age : " << pInteger << std::endl;

  // Pointer Reassignment to Another Variable
  int DogsAge = 9;
  pInteger = &DogsAge;
  std::cout << "*pInteger points to DogsAge now -> " << pInteger << std::endl;

  return 0;
}
