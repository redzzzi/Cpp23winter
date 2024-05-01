#include <iostream>

using namespace std;

class Parent {
public:
  void show() { cout << "This is Parent." << endl; }
  /*
  void show(int a) {
    cout << "a: " << a << endl;
  }
  */
};

class Child: Parent {
public:
  virtual void show() { cout << "This is Child." << endl; }

};

class ChildChild: Child {
public:
  virtual void show() { cout << "This is ChildChild." << endl; }
};

int main() {
  Parent *p = new Parent;
  Child *c = new Child;
  ChildChild *cc = new ChildChild;

  // Below ones Static Binding at Compile time. cf) dynamic binding -> run-time
  // p->show(); c->show(); cc->show(); // STEP 1
  // OVERRIDING
  // While compiler is parsing the building, Function Binding will happen.

  p = c;
  p->show();
  p = cc;
  p->show();

  /*
  c->show();
  c->show(10); // error. integer hidden
  */

  return 0;
}
