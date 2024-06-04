#include <iostream>
using namespace std;

/*
Output
-----------
Tuna swims!
Carp swims!
*/

class Fish {
public:
  virtual void Swim() {
    cout << "Fish swims!" << endl;
  }
};

class Tuna: public Fish {
public:
  // override Fish::Swim
  void Swim() {
    cout << "Tuna swims!" << endl;
  }
};

class Carp: public Fish {
  void Swim() {
    cout << "Carp swims!" << endl;
  }
};

void MakeFishSwim(Fish& InputFish) { // 참조를 하여 복사본이 없고, 메모리를 절약, 원본 객체에 반영
  // calling virtual method Swim()
  InputFish.Swim();
}

int main() {
  Tuna myDinner;
  Carp myLunch;

  // sending Tuna as Fish
  MakeFishSwim(myDinner);

  // sending Carp as Fish
  MakeFishSwim(myLunch);

  return 0;
}

/*
[코드의 흐름 파악하기]
1. 부모 클래스인 class Fish를 선언한다.
2. 부모 클래스에 Swim이라는 함수를 선언한다. -> 활용하려면 Fish::Swim()
3. Fish 클래스를 상속하는 자식 클래스인 Tuna를 선언한다.
4. Tuna::Swim()을 하였을 때, 오버라이딩이 되도록 함수의 원형을 같게하고 내용을 바꾼다.
5. MakeFishSwim이라는 함수를 선언하여, 클래스를 인자로 받고, 부모 클래스의 Swim()을 받도록 한다.
6. Tuna 클래스의 instance인 myDinner을 생성한다.
7. myDinner은 Tuna 클래스이므로, 오버라이딩되어 "Tuna swims!"가 출력된다.
8. MakeFishSwim()에서는 따로 오버라이드되지 않으므로 "Fish swims!"가 출력된다.
*/
