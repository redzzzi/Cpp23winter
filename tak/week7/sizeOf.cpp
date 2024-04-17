#include <iostream>

using namespace std;

class MyString {
private:
  char *Buffer;
  int length;
};

class Human {
public:
  int Age;
  bool Getnder;
  MyString myString;

public:
  Human() {
    cout << "Constructor is called." << endl;
  }
};

int main() {
  Human Tom;
  cout << sizeof(MyString) << endl; // 16
  cout << sizeof(Human) << endl; // 24
  cout << sizeof(Tom) << endl; // 24
}
