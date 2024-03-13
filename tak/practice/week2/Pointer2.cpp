#include <iostream>

using namespace std;

int main() {
  int Age = 30;
  int DogAge = 0; // Automatically allocated in the memory by the C++ Compiler
  // Pointer type variable must access to some variable alive in the memory
  int* pInteger = &Age;
  cout << pInteger << endl; // Age의 주솟값을 프린트

  pInteger = &DogAge;
  cout << pInteger << endl; // DogAge의 주솟값을 프린트

  char* pChar;
  *pChar = 'A';
  cout << *pChar << endl;
  // 첫 시작 주소를 알면, 전체 사이즈를 알 수 있음
  return 0;
}
