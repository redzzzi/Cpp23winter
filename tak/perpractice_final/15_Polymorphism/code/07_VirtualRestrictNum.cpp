// virtual이라는 키워드가 상속 계층에서 기본 동물 클래스의 인스턴스 수를 하나로 제한하는 것을 입증한다.
#include <iostream>
using namespace std;

class Animal {
public:
  Animal() {
    cout << "Animal constructor" << endl;
  }

  // sample method
  int Age;
};

class Mammal: public virtual Animal {};

class Bird: public virtual Animal {};

class Reptile: public virtual Animal {};

class Platypus: public Mammal, public Bird, public Reptile {
public:
  Platypus() {
    cout << "Platypus constructor" << endl;
  }
};

int main() {
  Platypus duckBilledP;

  // no compile error as there is only one Animal::Age
  duckBilledP.Age = 25;

  return 0;
}

/*
OUTPUT
---------
Animal constructor
Platypus constructor
*/
