#include <iostream>

using namespace std;

class Human {
  int age;
public:
  constexpr Human(int humansAge): age(humansAge) {}
  constexpr int GetAge() const {
    return age;
  }
};

int main() {
  constexpr Human somePerson(15);
  const int hisAge = somePerson.GetAge();
  cout << hisAge << endl;

  Human anotherPerson(45); // not constant expression
  cout << anotherPerson.GetAge();
  
  return 0;
}
