#include <iostream>

using namespace std;

// Virtual Concept
class A {
public:
  int i;
};

class subA: public A {
public:
  int j;
};

int main() {
  subA mySubA;
  A myA = mySubA; // type conversion
  myA_i = 0;
  // myA_j = 1; // error
  return 0;
}

// Derived Class can be converted into its Base class
// - derived one can access only its base one
// - if Base Class tries to be converted into its derived class? -> NO!! Slicing problem.
