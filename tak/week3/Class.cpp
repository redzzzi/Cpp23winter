#include <iostream>
#include <string>

using namespace std;

class Human {
public:
  int Age;
  string Name;
  string DateOfBirth;
public:
  void Talk(string TextToTalk) {
    cout << TextToTalk << endl;
  }
  void Introduce() {
    cout << "Age: " << Age << endl;
    cout << "Name: " << Name << endl;
    cout << "DateOfBirth: " << DateOfBirth << endl;
  }
};

int main() {
  // INSTANCE -> located in STACK
  Human Julie;

  Julie.Age = 21;
  Julie.Name = "Julie Anna";
  Julie.Introduce();

  cout << "hello world!" << endl;
  return 0;
}
