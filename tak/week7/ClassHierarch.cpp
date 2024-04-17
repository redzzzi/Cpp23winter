#include <iostream>

using namespace std;

class Fish {
public:
  bool FreshWaterFish;
  
  void swim() {
    if (FreshWaterFish)
      cout << "Swim in the lake" << endl;
    else
      cout << "Swim in the sea" << endl;
  }
};

class Tuna : public Fish {
public: // public을 해줘야 Tuna constructor 사용 가능
  Tuna() {
    FreshWaterFish = false;
  }
};

class Carp : public Fish {
public:
  Carp() {
    FreshWaterFish = true;
  }
};

int main() {
  cout << "Hello World!" << endl;
  Carp myLunch;
  Tuna myDinner;

  myLunch.swim();
  myDinner.swim();

  return 0;
}
