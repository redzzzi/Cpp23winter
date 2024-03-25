#include <iostream>

using namespace std;

int & GetInt();

int main() {
  cout << "Hello World!" << endl;
  int & rInt = GetInt();
  cout << rInt << endl;
  return 0;
}

// int & GetInt() {
//   int nLocalInt = 25;
//   return nLocalInt;
// }
int & GetInt() {
  int *pInteger = new int(25);
  return *pInteger;
}
