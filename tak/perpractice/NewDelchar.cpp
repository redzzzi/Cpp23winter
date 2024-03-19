// Allocating Using new[] and Releasing It Using delete[]
#include <iostream>
#include <cstring>

using namespace std;

int main() {
  cout << "Enter your name: ";
  string Name;
  cin >> Name;

  // null(입력이 끝났다는 뜻)을 위한 공간 1 추가
  int CharsToAllocate = Name.length() + 1;
  
  // request for memory to hold copy of input
  char* CopyOfName = new char [CharsToAllocate];
  
  // strcpy copies from a null-terminating string
  strcpy(CopyOfName, Name.c_str());

  // Display the copied string
  cout << "Dynamically allocated buffer contains: " << CopyOfName << endl;

  // Done using buffer? Delete.
  delete[] CopyOfName;

  return 0;
}
