#include <iostream>

using namespace std;

class Fish {
public:
  virtual void Swim() {
    cout << "Fish Swim" << endl;
  }
};

class Tuna: public Fish {
public:
  virtual void Swim() {
    cout << "Tuna Swim" << endl;
  }
};

void MakeFishSwim(Fish &InputFish) {
  InputFish.Swim();
}

int main() {
  cout << "Hello world!" << endl;
  Tuna myDinner;
  myDinner.Swim();
  MakeFishSwim(myDinner);

  return 0;
}
