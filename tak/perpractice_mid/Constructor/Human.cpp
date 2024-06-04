#include <iostream>

using namespace std;

class Human {
  int age;
public:
  // explicit constructor blocks implicit conversions
  explicit Human(int humansAge): age(humansAge) {} // age 멤버 변수를 humansAge로 초기화
};

void DoSomething(Human person) {
  cout << "Human sent did something." << endl;
  return;
}

int main() {
  Human kid(10); // explicit conversion is OK
  Human anotherKid = Human(11); // explicit, OK
  DoSomething(kid); // OK

  // Human anotherKid2 = 11; // Failure: implicit conversion no OK
  // DoSomething(10); // implicit conversion

  return 0;
}
