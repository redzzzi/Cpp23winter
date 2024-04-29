#include <iostream>

using namespace std;

class Motor {
public:
  void SwitchIgnition() {
    cout << "Ignition On" << endl;
  }
  void PumpFuel() {
    cout << "Fuel In Cylinders" << endl;
  }
  void FireCylinders() {
    cout << "Vroom" << endl;
  }
};

class Car: protected Motor {
public:
  void Move() {
    SwitchIgnition();
    PumpFuel();
    FireCylinders();
  }
};

class SuperCar: protected Car {

};

int main() {
  Car myDreamCar;
  myDreamCar.Move();
  myDreamCar.PumpFuel(); // be careful about PRIVATE

  return 0;
}
