// WITH virtual destructor
//
// Need for Virtual Destructors
// (1) new를 사용하여 free store에서 초기화된 deriving 클래스의 소멸자 코드는
//     Base*의 포인터 타입으로 delete가 호출될 경우 호출되지 않는다.
//     --> Destroyed Fish만 출력되고 Destroyed Tuna는 출력되지 않는다.
// (2) 이런 코드는 릴리즈되지 않거나, 메모리 누수 등을 일으킬 수 있다.
// (3) 따라서 virtual destructor!를 사용하자

// 포인터로 delete 할 때도 이제는 파생클래스의 소멸자가 작동된다.
#include <iostream>
using namespace std;

class Fish {
public:
  Fish() {
    cout << "Constructed Fish" << endl;
  }
  virtual ~Fish() {
    cout << "Destroyed Fish" << endl;
  }
};

class Tuna: public Fish {
public:
  Tuna() {
    cout << "Constructed Tuna" << endl;
  }
  ~Tuna() {
    cout << "Destroyed Tuna" << endl;
  }
};

void DeleteFishMemory(Fish* pFish) {
  delete pFish;
}

int main() {
  cout << "Allocating a Tuna on the free store: " << endl;
  Tuna* pTuna = new Tuna; 
// 객체 Tuna 생성 시, Fish를 상속받기 때문에 기본 클래스인 Fish 생성자 먼저 호출 후 Tuna 생성자 호출
  cout << "Deleting the Tuna: " << endl;
  DeleteFishMemory(pTuna);

  cout << "Instantiating a Tuna on the stack: " << endl;
  Tuna myDinner;
  cout << "Automatic destruction as it goes out of scope: " << endl;
  // 스택에 할당된 객체는 스코프를 벗어날 때 자동으로 소멸한다.

  return 0;
}

// 생성자 : 기본 -> 파생 순서
// 소멸자 : 파생 -> 기본 순서

/*
OUTPUT
-----------
Allocating a Tuna no the free store:
Constructed Fish
Constructed Tuna
Deleting the Tuna:
Destroyed Tuna
Destroyed Fish
Instantiating a Tuna on the stack:
Constructed Fish
Constructed Tuna
Automatic destruction as it goes out of scope:
Destroyed Tuna
Destroyed Fish
*/
