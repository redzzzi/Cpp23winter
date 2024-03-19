#include <iostream>

using namespace std;

int main() {
  int Age = 30;
  double Pi = 3.1416;
  char SayYes = 'y';

  // initialize pointers to addresses of the variables
  int* pInt = &Age;
  double* pDouble = &Pi;
  char* pChar = &SayYes;

  cout << "[Sizeof Fundamental Types]" << endl;
  cout << " - sizeof(int) = " << sizeof(int) << endl;
  cout << " - sizeof(double) = " << sizeof(double) << endl;
  cout << " - sizeof(char) = " << sizeof(char) << endl << endl;
  cout << "[Sizeof Pointers to Fundamental Types]" << endl;
  cout << " - sizeof(pInt) = " << sizeof(pInt) << endl;
  cout << " - sizeof(pDouble) = " << sizeof(pDouble) << endl;
  cout << " - sizeof(pChar) = " << sizeof(pChar) << endl;

  return 0;
}
