#include <iostream>

using namespace std;

int foo(int x, int c) {
  c = c - 1;
  if (c==0)
    return 1;
  x = x + 1;
  return foo(x, c) * x;
}

int main() { 
  cout << foo(7, 4) << endl;
  return 0;
}
