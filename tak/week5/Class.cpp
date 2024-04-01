#include <iostream>
#include <string>

using namespace std;

class Human {
private:
  int Age;
  string Name; // No Constructor.
};

int main() {
  cout << "Hello world!" << endl;
  Human Eve(21); // Compiler Automatically Human().
  // cout << Eve.Age;

  return 0;
}
