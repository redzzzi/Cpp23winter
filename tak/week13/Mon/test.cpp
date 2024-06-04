#include <iostream>
using namespace std;

class Base {
};

class Derived: public Base {
};

class CUnRelated {
};

class F {
public:
  virtual void Swim() {
    cout << "F swims in water" << endl;
  }
};

class T: public F {
public:
  void Swim() {
    cout << "T swims in sea" << endl;
  }
  void BecomeDinner () {
    cout << "Dinner in Sushi" << endl;
  }
};

class C: public F {
public:
  void Swim() {
    cout << "C swims in lake" << endl;
  }
  void Talk() {
    cout << "Talk" << endl;
  }
};

void DetectFishType(F* InputFish) {
  T* plsT = dynamic_cast<T*>(InputFish);
  if (plsT) {
    cout << "Detected T" << endl;
    plsT->BecomeDinner();
  }
  C* plsC = dynamic_cast<C*>(InputFish);
  if (plsC) {
    cout << "Detected C" << endl;
    plsT->Talk;
  }
}

int main() {
  cout << "Hello World!" << endl;
  char *pS = "Hello World";
  int *pB = (int *)pS;

  Base *pBase = new Derived(); // Derived -> Base. OK
  // Derived* pDerived = pBase; // Base -> Derived. Not OK
  Derived *pDerived = static_cast<Derived*>(pBase); // Need type case at complie time. why? we got an error at compile time
  // Try to C-Style TypeCast
  Derived *pDerived2 = (Derived*)pBase; // C-Style cast is still OK
  // CUnrelated *pUnrelated = pBase;
  // CUnrelated *pUnrelated = static_cast<Derived*>(pBase);
  class CUnrelated {...};
  return 0;
}
