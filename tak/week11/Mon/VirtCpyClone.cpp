#include <iostream>
using namespace std;

class F { // ABC
public:
  virtual F* Clone() = 0; // pure virtual method
  virtual void Swim() = 0;
  virtual ~F() {};
};

class T: public F {
public:
  F* Clone() override {
    return new T(*this);
  }
  void Swim() override final {
    cout << "T swims" << endl;
  }
};

class B final: public T {
public:
  F* Clone() override {
    return new T(*this);
  }
  /*
  void Swim() override final {
    cout << "B swims" << endl;
  }
  */
};

int main() {
  cout << "Hello World!" << endl;
  return 0;
}
