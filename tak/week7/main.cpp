#include <iostream>

using namespace std;

constexpr double GetPI() { return 22.0 / 7; } // 1
constexpr myaddition(int i, int j) {          // 2
  return i + j;
}
const myconstaddition(int i, int j) {         // 3
  return i + j;
}

int main() {
  cout << "Hello World!" << endl;
  cout << GetPI() << endl;

  int age;
  cin >> age;
  // const int userAge = age; // 런타임에서 결정이 된다.
  const int userAge(age);
  // constexpr int userAge = age; // 컴파일에서 결정이 된다.
  cout << userAge;

  const float y(108);
  // const int j;
  // constexpr int j;
  int j = 0;
  // constexpr int k = j+1;
  j = myaddition(10, 10);   

  int k = 10;
  j = myaddition(k, k);

  j = myconstaddition(10, 10);
  j = myconstaddition(k, k);

  const int m = myconstaddition(10, 10);
  const int n = myconstaddition(k, k);

  constexpr int x = myaddition(10, 10);
  constexpr int z = myconstaddition(10, 10);

  return 0;
}
