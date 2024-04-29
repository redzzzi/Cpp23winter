#include <iostream>

using namespace std;

class Human {
public:
  int age;
public:
  Human(int HumanAge) : age(HumanAge) {}
};

void DoSomething(Human person) {
  cout << "Human sent did something" << endl;
}

int main() {
  cout << "Hello world!" << endl;
  Human kid(10);
  // Human anotherKid = 11;
  // cout << anotherKid.age << endl;
  // DoSomething(10);
  return 0;
}
