#include <iostream>

using namespace std;

class A {
public:
  int age;

  A() {}
  A(int myAge) { // implicit conversion
    age = myAge;
    cout << "A is created." << endl;
  }
};

int main() {
  A myA = 11;
  A myA2;

  myA2 = 11;
}
