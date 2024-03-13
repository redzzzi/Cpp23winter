#include <iostream>

using namespace std;

int main() {
  int Age = 30;
  const double Pi = 3.1416;
  cout << hex << &Age << endl;
  cout << hex << &Pi << endl;

  int *pInteger = &Age;
  
  return 0;
}
