#include <iostream>

using namespace std;

class Human {
public:
  // Data attributes:
  string Name;
  string DateOfBirth;
  string PlaceOfBirth;
  string Gender;

  // Methods:
  void Talk(string TestToTalk);
  void IntroduceSelf() {
    cout << "IntroduceSelf() ..." << endl;
  };
};

int main() {
  Human Tom; // an instance of Human
  Tom.DateOfBirth = "1970";
  Tom.IntroduceSelf();

  Human* pTom = new Human();
  (*pTom).IntroduceSelf();

  return 0;
}
