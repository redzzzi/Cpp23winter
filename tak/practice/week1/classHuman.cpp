#include <iostream>
#include <string>

using namespace std;

class Human {
public:
  string Name = "Tom cruise";
  int Age = 23;
};

int main() {
  Human Tom;
  cout << Tom.Name << endl;

  return 0;
}
