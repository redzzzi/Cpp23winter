#include <iostream>
#include <cstring>

using namespace std;

class MyString {
private:
  string Buffer;
public:
  MyString(string InitialInput) {
    cout << "Constructor: creating new MyString " << endl;
    Buffer = InitialInput;
    cout << "Buffer points to: " << (void *)&Buffer[0] << hex;
    cout << (unsigned int*)Buffer << endl;
  }
  
  ~MyString() {
    cout << "Invoking destructor, clearing up" << endl;
  } // string class automatically add pointer
};

void useMyString(MyString Input) {
  cout << "String buffer in MyString: " << (void *)&Input.Buffer[0] << endl;
  cout << "Buffer contains " << Input.Buffer.c_str() << endl;

  return;
}

int main() {
  cout << "Hello World!" << endl;
  MyString SayHello("Hello from MyString Class");
  useMyString(SayHello);

  return 0;
}
