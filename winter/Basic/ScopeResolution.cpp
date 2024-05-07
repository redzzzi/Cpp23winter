#include <iostream>

namespace BestComImpl {
  void SimpleFunc() {
    std::cout << "BestCome defining function" << std::endl;
  }
}

namespace ProgComImpl {
  void SimpleFunc() {
    std::cout << "ProgCom defining function" << std::endl;  
  }
}

int main() {
  // 연산자 ::을 범위지정 연산자(scope resolution operator)라고 하며,
  // 이름 공간을 지정할 때 사용하는 연산자이다.
  BestComImpl::SimpleFunc();
  ProgComImpl::SimpleFunc();
  return 0;
}
