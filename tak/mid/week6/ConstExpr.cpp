#include <iostream>

using namespace std;

class Human {
  int age;
public:
  constexpr Human(int humansAge): age(humansAge) {}
  constexpr int GetAge()  const { return age; }
};

int main() {
  cout << "Hello world!" << endl;
  constexpr Human somePerson(15); 
  const int hisAge = somePerson.GetAge();
  Human anotherPerson(45);

  return 0;
}
