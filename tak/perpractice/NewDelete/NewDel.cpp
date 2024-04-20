// Accessing Memory Allocated Using new via Operator (*)
// and Releasing It Using delete

#include <iostream>

using namespace std;

int main() {
  // 정수 하나에 해당하는 메모리 공간 요청
  int* pAge = new int;
  cout << pAge << endl;
  cout << *pAge << endl;

  // 할당된 메모리를 사용하여 숫자 저장하기
  cout << "Enter your dog's age: ";
  cin >> *pAge;

  // 간접 참조 연산자(*)를 사용하여 값에 접근
  cout << "Age " << *pAge << " is stored at " << pAge << "." << endl;

  delete pAge; // 메모리 해제
  
  return 0;
}
