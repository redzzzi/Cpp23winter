#include <iostream>
#include <string.h>

int main() {
  char a[10];
  printf("input : ");
  scanf("%s", a);
  std::string s(a);
  printf("a is %s\n", a);
  printf("s is %s\n", s.c_str());
}
