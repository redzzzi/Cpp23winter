// 하나의 Platypus 인스턴스에 대해 기본 클래스의 동물 인스턴스 수를 확인
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

class Mammal: public Animal {};

class Bird: public Animal {};

class Reptile: public Animal {};

class Platypus: public Mammal, public Bird, public Reptile {
public:
  Platypus() {
    cout << "Platypus constructor" << endl;
  }
};

int main() {
  Platypus duckBilledP;

  // uncomment next line to see compile failure
  // Age is ambiguous as there are three instances of base Animal
  // duckBilledP.Age= 25;

  return 0;
}

/*
OUTPUT
---------
Animal constructor
Animal constructor
Animal constructor
Platypus constructor
*/
