#include <iostream>

using namespace std;

class M {
public:
  void m1() { cout << "m1" << endl; }
};

class R {
public:
  void r1() { cout << "r1" << endl; }
};

class B {
public:
  void b1() { cout << "b1" << endl; }
};

class P: public M, public R, public B {
public:
  void p1() { cout << "p1" << endl; }
};

int main() {
  P Platypus;
  Platypus.b1();
  Platypus.r1();

  return 0;
}
// JAVA Do Not only single inheritance
