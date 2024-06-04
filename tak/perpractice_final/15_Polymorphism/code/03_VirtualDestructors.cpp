// Need for Virtual Destructors
#include <iostream>
using namespace std;

class Fish {
public:
  Fish() {
    cout << "Constructed Fish" << endl;
  }
  ~Fish() {
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

/*
OUTPUT
-----------
Allocating a Tuna no the free store:
Constructed Fish
Constructed Tuna
Deleting the Tuna:
Destroyed Fish
Instantiating a Tuna on the stack:
Constructed Fish
Constructed Tuna
Automatic destruction as it goes out of scope:
Destroyed Tuna
Destroyed Fish
*/
