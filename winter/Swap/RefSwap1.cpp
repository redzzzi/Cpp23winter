#include <iostream>
using namespace std;

void SwapByRef1(int *ptr1, int *ptr2) {
  int temp = *ptr1;
  *ptr1 = *ptr2;
  *ptr2 = temp;
}

int main(void) {
  int val1 = 10;
  int val2 = 20;
  SwapByRef1(&val1, &val2);

  return 0;
}
