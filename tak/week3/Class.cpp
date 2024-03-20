#include <iostream>
#include <string>

using namespace std;

class Human {
public:
  int Age;
  string Name;
  string DateOfBirth;
public:
<<<<<<< HEAD
  Human() {
    Age = 10;
    cout << "Constructor is called!!" << endl;
  }
  ~Human() { // Destructor
    cout << "Destructor is called!!" << endl;
  }
=======
>>>>>>> 3fe26f3607128c4b20e9f49f0744c245a00c9cf7
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

<<<<<<< HEAD
  Human *Joe = new Human();
  (*Joe).Age = 23;
  (*Joe).Name = "Joe";
  (*Joe).Introduce();
  Joe -> Introduce(); // -> operator represents Introcduce.

=======
>>>>>>> 3fe26f3607128c4b20e9f49f0744c245a00c9cf7
  cout << "hello world!" << endl;
  return 0;
}
