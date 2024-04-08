#include <iostream>

using namespace std;

union SimpleUnion {
  int num;
  char alphabet;
};

struct ComplexType {
  enum DataType {Int, Char} Type;
  union Value {
    int num;
    char alphabet;

    Value() {}
    ~Value() {}
  } value; // type is union Value
};

int main() {
  cout << "Hello world!" << endl;
  return 0;
}
