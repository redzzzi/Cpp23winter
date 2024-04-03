#include <iostream>
#include <string>

using namespace std;

class MyString {
private:
  char* Buffer;
public:
  MyString(const char* InitialInput) {
    if (InitialInput != NULL)
      Buffer = new char[strlen(InitialInput) + 1];
      strcpy(Buffer, InitialInput);
    else
      Buffer = NULL;
    ~MyString() {
      if (Buffer != NULL)
        delete [] Buffer;
    }
    int GetLength() {
      return strlen(Buffer);
    }
    const char * GetString() {
      return Buffer;
    }
  }
};

void useMyString(MyString Input) {
  cout << "String buffer in MyString: " << Input.GetString() << endl;
  return;
}

int main() {
  cout << "Hello World!" << endl;
  MyString SayHello("Hello from MyString Class");
  cout << "Length: " << SayHello.GetLength() << endl;
  cout << "Message: " << SayHello.GetString() << endl;
  useMyString(SayHello);

  return 0;
}
