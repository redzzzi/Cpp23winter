#include <iostream>
#include <stdio.h>

using namespace std;

class Human {
private:
  int Age;
  string Name;
  friend void DisplayAge(const Human& Person);
public:
  Human(string InputName, int InputAge) {
    Name = InputName;
    Age = InputAge;
  }
};

void DisplayAge(const Human& Person) {
  cout << Person.Age << endl;
}

int main() {
  cout << "Hello world!" << endl;
  Human Tom("Tom", 25);
  DisplayAge(Tom);

  return 0;
}
