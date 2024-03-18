#include <iostream>

int main() {


  // try {
  //   // Request lots of memory source
  //   int *pAge = new int [536870911];
  //   delete[] pAge;
  // }
  // catch (bad_alloc) {
  //   std::cout << "Memory allocation failed." << std::endl;
  // }




  // // don't kick me out of the system
  // // int* pAge = new(nothrow) int [0x1ffffffff];
  // int* pAge = new int [0x1ffffffff];

  // if (pAge) { // check pAge != NULL
  //   delete [] pAge;
  // } else {
  //   std::cout << "Memory allocation failed." << std::endl;
  // }



  // SAME THINGS
  int intOne;
  int &SomeRef = intOne;
  intOne = 5;

  std::cout << intOne << std::endl;
  std::cout << SomeRef << std::endl;
  std::cout << &intOne << std::endl;
  std::cout << &SomeRef << std::endl;

  return 0;
}
