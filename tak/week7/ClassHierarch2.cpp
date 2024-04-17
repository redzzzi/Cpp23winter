#include <iostream>

using namespace std;

class Fish {
protected: // accessible only to derived classes
  bool FreshWaterFish;
  
public:
  // Constructor
  Fish(){} //내가 생성자 오버로딩을 아래줄에서처럼 개인적으로 해줬다면 반드시 기본생성자도 적어줘야 함
  Fish(bool isFreshwater) : FreshWaterFish(isFreshwater) {}

  void swim() {
    if (FreshWaterFish)
      cout << "Swim in the lake" << endl;
    else
      cout << "Swim in the sea" << endl;
  }
};

class Tuna : public Fish {
public: // public을 해줘야 Tuna constructor 사용 가능
  // Tuna() {
  //   FreshWaterFish = false;
  // }
  using Fish::swim;
  Tuna(): Fish(false) {}
  
  void swim() { // 함수 오버라이딩
    cout << "Tuna swims really fast" << endl;
  }
};

class Carp : public Fish {
public:
  // Carp() {
  //   FreshWaterFish = true;
  // }
  using Fish::swim;
  Carp(): Fish(true) {}

  void swim() {
    cout << "Carp swims really slowly" << endl;
  }
};

int main() {
  cout << "Hello World!" << endl;
  Carp myLunch;
  Tuna myDinner;

  myLunch.swim();
  myDinner.swim();

  myDinner.Fish::swim();

  return 0;
}
