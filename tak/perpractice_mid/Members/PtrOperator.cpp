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
  Human* pTom = new Human();
  pTom->DateOfBirth="1970";
  pTom->IntroduceSelf(); 
  delete pTom;
  Human Tom;

  Human* pTom2 = &Tom; // Assign address using reference operator&
  pTom2->DateOfBirth = "1970"; // is equivalent to Tom.DateOfBirth = “1970”;
  pTom2->IntroduceSelf(); // is equivalent to Tom.IntroduceSelf();

  return 0;
}
