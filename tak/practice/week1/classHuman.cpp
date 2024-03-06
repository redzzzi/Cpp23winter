#include <iostream>
#include <string>

using namespace std;

class Human {
private:
  string Name = "Tom cruise";
  int Age = 23;
public:
  void SetAge (int HumanAge) {
    Age = HumanAge;
  }
};

int main() {
  Human Tom;
  // cout << Tom.Name << endl;

  return 0;
}
