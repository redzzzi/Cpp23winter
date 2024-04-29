#include <iostream>

using namespace std;

class A {
public:
  int age;

  A() { cout << "Default A is created." << endl; }
  A(int myAge) { // implicit conversion
    age = myAge;
    cout << age << " A is created." << endl;
  }
  // explicit A(int myAge) {
  //   age = myAge;
  //   cout << age << " A is created." << endl;
  // }
};

int main() {
  A myA = 11;
  A myA2;

  myA2 = 12;
}
