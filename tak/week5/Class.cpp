#include <iostream>
#include <string>

using namespace std;

class Human {
// private:
//   int Age;
//   string Name; // No Constructor.
public:
  int Age;
  string Name; // No Constructor.
  /*
  Human() {
  }
  // Overloaded contructor
  Human(int HumanAge) {
    Age = HumanAge;
  }
  */
  Human(string HumanName = "Aimyong", int HumanAge = 24) {
    Name = HumanName;
    Age = HumanAge;
  }
  ~Human() {
    cout << "Destructor is called ..." << endl;
  }
};

int main() {
  cout << "Hello world!" << endl;
  Human Aimyong;
  // Human Eve(21); // Compiler Automatically Human().
  // Human Tom;
  // Human Ive("Ive", 21);
  Human Twix("Twix");
  cout << Twix.Name << endl;
  cout << Twix.Age << endl;
  Human Jenny("Jenny", 25);
  cout << Jenny.Name << endl;
  cout << Jenny.Age << endl;
  // cout << Ive.Name << endl;
  // cout << Ive.Age << endl;
  // cout << Eve.Age;

  return 0;
}
