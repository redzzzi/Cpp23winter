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

<<<<<<< HEAD
class Utility {
public:
  static void DisplayAge(const Human& Person) {
    cout << Person.Age << endl;
  }
};

=======
>>>>>>> bd968b9de7971202d1e36648d2318720f1a56fea
void DisplayAge(const Human& Person) {
  cout << Person.Age << endl;
}

int main() {
  cout << "Hello world!" << endl;
  Human Tom("Tom", 25);
  DisplayAge(Tom);
<<<<<<< HEAD
  Utility::DisplayAge(Tom);
=======
>>>>>>> bd968b9de7971202d1e36648d2318720f1a56fea

  return 0;
}
