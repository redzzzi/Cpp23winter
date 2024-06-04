#include <stdio.h>

int main() {
  int num = 5;
  int* pInteger = &num;

  printf("This is pInteger -> %p\n", pInteger);
  printf("This is *pInteger -> %d\n", *pInteger);

  return 0;
}
