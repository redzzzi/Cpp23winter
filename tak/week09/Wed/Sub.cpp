#include <iostream>

using namespace std;

class A {
public:
  char n;
  int a;
  char c;
  virtual void m1() {}
};

class subA: public A {
public:
  int k;
public:
  virtual void m2() {}
};

int main() {
  subA mySubA;
  cout << sizeof(mySubA) << endl;
  cout << sizeof(A) << endl;
  cout << sizeof(mySubA) << endl;

  return 0;
}
