#include <iostream>
using namespace std;

class Fish {
public:
  // define a pure virtual function Swim
  virtual void Swim() = 0;
};

class Tuna: public Fish {
public:
  void Swim() {
    cout << "Tuna swims fast in the sea!" << endl;
  }
};

class Carp: public Fish {
  void Swim() {
    cout << "Carp swims fast in the sea!" << endl;
  }
};

void MakeFishSwim(Fish& inputFish) {
  inputFish.Swim();
}

int main() {
  // Fish myFish; -> fail
  Carp myLunch;
  Tuna myDinner;

  MakeFishSwim(myLunch);
  MakeFishSwim(myDinner);

  return 0;
}
