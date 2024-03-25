#include <iostream>

using namespace std;

class Simple {
public:
  int i = 10;
  void Setl(int i) {
    i = i;
  }
};

int main() {
  Simple S;

  S.Setl(11);
  cout << S.i << endl;

  return 0;
}
