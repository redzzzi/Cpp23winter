#include <iostream>

using namespace std;

class Human {
  int age;
public:
  Human(int humansAge): age(humansAge) {}
  int GetAge()  const { return age; }
};

int main() {
  cout << "Hello world!" << endl;
  Human somePerson(15);
  int hisAge = somePerson.GetAge();

  return 0;
}
