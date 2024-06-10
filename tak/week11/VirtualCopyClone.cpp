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
  void Swim() override final {
    cout << "B swims" << endl;
  }
};

class C final: public T {
public:
  F* Clone() override {
    return new T(*this);
  }
  void Swim() override final {
    cout << "C swims" << endl;
  } 
};

int main() {
  cout << "Hello World!" << endl;

  const int ARRAY_SIZE = 4;
  F* myF[ARRAY_SIZE] = {NULL};
  myF[0] = new T();
  myF[1] = new C();
  myF[2] = new B();
  myF[3] = new C();

  F* myNewF[ARRAY_SIZE];
  // Clone
  for (int i = 0; i < ARRAY_SIZE; ++i)
    myNewF[i]=myF[i]->Clone();
  for (int i = 0; i < ARRAY_SIZE; ++i)
    myNewF[i]->Swim();

  for (int i = 0; i < ARRAY_SIZE; ++i) {
    delete myF[i];
    delete myNewF[i];
  }

  return 0;
}
