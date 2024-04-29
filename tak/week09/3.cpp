#include <iostream>

using namespace std;

class BaseA {
public:
  void Swim() {}
  // 위아래는 overloading이다. 같은 메소드 이름을 가졌으나 매개변수는 다르다.
  void Swim(bool b) {}
};

class DeriveA: public BaseA {
public:
  // using BaseA::Swim; // Solution 2: unhide Swim() methods in base class BaseA
  void Swim() {}
  // void Swim(bool b) {} // Solution 3
  // DeriveA에서 같은 메소드를 재실행 할 필요가 없다. -> JUST USE "BaseA": 직접 access 하기!!
  void Swim(bool b) {
    BaseA::Swim(b); // Solution 4
  }
};

int main() {
  cout << "Hello world!" << endl;
  DeriveA myDeriveA;
  myDeriveA.Swim();
  // Swim()이 BaseA 클래스에 선언돼있음에도 불구하고 DeriveA에서 쓸 수 있는 이유
  // due to the inheritance relationship
  // between a base class and its derived class

  // myDeriveA.Swim(true); // 에러가 난다. Problem: Base 클래스가 메소드를 숨기려 하기 때문이다.
  myDeriveA.BaseA::Swim(true); // Solution 1  
  
  return 0;
}
