#include <iostream>

using namespace std;

class Human {
  int age;
public: 
  explicit Human(int HumanAge): age(humansAge) {}
};

void DoSomething(Human person) {
  cout << "adsf" << endl;
  return;
}

int main() {
  Human kid(10);
  Human anotherKid = Human(11);
  DoSomething(kid);

  return 0;
}
