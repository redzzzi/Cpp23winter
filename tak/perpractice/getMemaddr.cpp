#include <iostream>

int main() {
  unsigned short shortVar = 5;
  unsigned long  longVar  = 65535;
  long           sVar = -65535;

  std::cout.width(10);
  std::cout << std::left << "shortVar: ";
  std::cout.width(10);
  std::cout << std::right << shortVar;
  std::cout.width(25);
  std::cout << std::left << "\tAddress of shortVar: ";
  std::cout << std::left << &shortVar << std::endl;


  std::cout.width(10);
  std::cout << std::left << "longVar: ";
  std::cout.width(10);
  std::cout << std::right << longVar;
  std::cout.width(25);
  std::cout << std::left << "\tAddress of longVar: ";
  std::cout << std::left << &longVar << std::endl;

  std::cout.width(10);
  std::cout << std::left << "sVar: ";
  std::cout.width(10);
  std::cout << std::right << sVar;
  std::cout.width(25);
  std::cout << std::left << "\tAddress of sVar: ";
  std::cout << std::left << &sVar << std::endl;

  return 0;
}
