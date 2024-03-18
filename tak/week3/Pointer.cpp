#include <iostream>

int main() {
  int* pT;

  std::cout << "Is it sunny (y/n)?" << std::endl;
  char i = 'y';
  std::cin >> i;

  if (i == 'y') {
    pT = new int;
    *pT = 30;
  }
  std::cout << *pT << std::endl;

  delete pT;
  // pT가 NULL이 아니면 pT를 지우기
  // if (pT != NULL)
  // if (pT)
    
  return 0;
}
