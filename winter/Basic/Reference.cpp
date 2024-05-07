#include <iostream>

using namespace std;

int main() {
  int num1 = 1000;
  int &num2 = num1; // 참조자는 선언과 동시에 변수를 참조해야한다.

  num2 = 3047;

  cout << "VAL: " << num1 << endl;
  cout << "REF: " << num2 << endl;

  cout << "VAL: " << &num1 << endl;
  cout << "REF: " << &num2 << endl;
  return 0;
}
