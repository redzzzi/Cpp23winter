#include <iostream>

using namespace std;

int main() {
  int Original = 30;
  const int& ConstRef = Original; // const is read-only
  // ConstRef = 40; // so it doesn't make sense
  // int& Ref2 = ConstRef; // binding error
  const int& Ref2 = ConstRef; // NO ERROR : Type Match

  cout << "Hello world!" << endl;
  return 0;
}
