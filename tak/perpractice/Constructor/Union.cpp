#include <iostream>

using namespace std;

union Test {
  int num;
  char alphabet;
};

struct Complex {
  enum DataType {
  Int,
  Char
} Type;
  union Value {
    int num;
    char alphabet;

    Value() {}
    ~Value() {}
  } value;
};

void DpComplexType(const Complex& obj) {
  switch (obj.Type) {
    case Complex::Int:
      cout << "Union contains number: " << obj.value.num << endl;
      break;
    case Complex::Char:
      cout << "Union contains character: " << obj.value.alphabet << endl;
      break;
  }
}

int main() {
  Test u1, u2;
  u1.num = 2100;
  u2.alphabet = 'C';
  cout << "sizeof(u1) containing integer: " << sizeof(u1) << endl;
  cout << "sizeof(u2) containing integer: " << sizeof(u2) << endl;

  Complex myData1, myData2;
  myData1.Type = Complex::Int;
  myData1.value.num = 2017;

  myData2.Type = Complex::Char;
  myData2.value.alphabet = 'X';

  DpComplexType(myData1);
  DpComplexType(myData2);

  return 0;
}
