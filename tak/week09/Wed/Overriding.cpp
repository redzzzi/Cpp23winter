#include <iostream>

using namespace std;

class Parent {
public:
  void show() { cout << "This is Parent." << endl; }
};

class Child: Parent {
public:
  void show() { cout << "This is Child." << endl; }
};

class ChildChild: Child {
public:
  void show() { cout << "This is ChildChild." << endl; }
};

int main() {
  Parent *p = new Parent;
  Child *c = new Child;
  ChildChild *cc = new ChildChild;

  // Below ones Static Binding at Compile time. cf) dynamic binding -> run-time
  // p->show(); c->show(); cc->show(); // STEP 1
  // OVERRIDING
  // While compiler is parsing the building, Function Binding will happen.

  return 0;
}
