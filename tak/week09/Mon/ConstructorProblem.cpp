#include <iostream>

using namespace std;

class BaseA {
public:
  bool b;
  // Problem: base class. 생성자가 오버로딩될 때 기본 생성자 BaseA()는 사라진다.
  BaseA(bool lsb): b(lsb) {}
};

class DeriveA: public BaseA {
public:
  DeriveA(): BaseA(true) {}
};

int main() {
  cout << "Hello world!" << endl;
  DeriveA myDeriveA; // requires default constructor of BaseA
  // Solution1: Declare BaseA() {}
  // Solution2: In the derived class, We just implement "Default constructor of Derived A"
  //            + We need to call BaseA's constructor, Base(boolean)
  
  return 0;
}
