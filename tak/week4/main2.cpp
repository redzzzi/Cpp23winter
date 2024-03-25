#include <iostream>

using namespace std;

class SimpleCat {
private:
  int itsAge;
public:
	SimpleCat();
	~SimpleCat();
	SimpleCat(SimpleCat&);
  int GetAge(){
    return itsAge;
  }
  void SetAge(int Age) {
    itsAge = Age;
  }
};

SimpleCat::SimpleCat() {
  cout << "Simple Cat Constructor ... " << endl;
}

SimpleCat::SimpleCat(SimpleCat&) {
  cout << "Simple Cat Copy Constructor ... " << endl;
}

SimpleCat::~SimpleCat() {
  cout << "Simple Cat Destructor ... " << endl;
}

SimpleCat FunctionOne(SimpleCat theCat);
const SimpleCat* const FunctionTwo(const SimpleCat *theCat);

int main()
{
  cout << "Hello world!" << endl;
  cout << " Walking a cat ..." << endl;
  SimpleCat Frisky;
  cout << "Calling FunctionOne ... " << endl;
  FunctionOne(Frisky);
  return 0;
}

SimpleCat FunctionOne(SimpleCat theCat) {
  cout << "Function One Returning ..."<< endl;
  return theCat;
}

const SimpleCat* const FunctionTwo(const SimpleCat *theCat) {
  cout << "Function Two Returning ..."<< endl;
  // theCat -> SetAge(8); // const cannot change
  return theCat;
}
