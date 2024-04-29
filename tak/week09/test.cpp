#include <iostream>

using namespace std;

class A {
public:
  char n;
  int i;
  char a;

  A() {
    printf("address: %p\n", &n);
    printf("address: %p\n", &i);
    printf("address: %p\n", &a);
  }
  void m1() {}
};

class DerivedA: public A {
public:
  int j;
  DerivedA() {
    printf("address: %p\n", &j);
  }
  void m2() {}
};

int main() {
  cout << "Hello world!" << endl;
  DerivedA myA;
  cout << sizeof(myA) << endl;

  // DerivedA *pMyA = new DerivedA();
  
  // Function Pointer: the location of methods

  return 0;
}
