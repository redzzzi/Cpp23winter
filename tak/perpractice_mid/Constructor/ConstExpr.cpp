#include <iostream>

constexpr int max = 100;

void use(int n) {
  constexpr int c1 = max + 7; // OK: c1 is 107 -> 컴파일타임에 max 값 확정돼있음(constexpr)
  constexpr int c2 = n + 7; // error: we don't know the value of c2 in compile time
  const int c3 = n + 7; // OK: but don't try to change the value of c3
  const int c4; // error: const requires initializer
  c3 = 4; // error: we can't change the value of const variable after initialization
}

int main() {
  return 0;
}
