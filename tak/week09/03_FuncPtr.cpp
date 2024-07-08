#include <iostream>

using namespace std;

class A {
public:
  void setHappy() {

  }
};

class subA: public A {
public:
  virtual void setAngry() {};
};

int main() {
  A *p1_p1 = new A();
  A *p1_p2 = new A();

  A *p2_p1 = new subA();
  A *p2_p2 = new subA();

  void (A::*fp1)() = &A::setHappy;
  void(subA::*fp2)() = &subA::setAngry; 

  (p1_p1->*fp1)();
  (p1_p2->*fp1)();
  (p2_p1->*fp1)(); // A의 setHappy 호출
  (p2_p2->*fp1)(); // A의 setHappy 호출

  // 멤버 함수 포인터의 주소는 출력 불가능하지만, 주소를 비교할 수는 있다
  cout << "fp1 address comparison: " << (fp1 == &A::setHappy) << endl;
  cout << "fp2 address comparison: " << (fp2 == &subA::setAngry) << endl;

  delete p1_p1;
  delete p1_p2;
  delete p2_p1;
  delete p2_p2;

  // execution code -> TEXT SEGMENT 위치 -> read-only
  // 지역 변수는 writable 할 수 있어야 한다. -> STACK SEGMENT

  return 0;
}
