#include <iostream>

using namespace std;
constexpr double GetPI() { return 22.0 / 7; }

int main() {
  cout << "Hello World!" << endl;
  cout << GetPI() << endl;

  int age;
  cin >> age;
  // const int userAge = age; // 런타임에서 결정이 된다.
  const int userAge(age);
  // constexpr int userAge = age; // 컴파일에서 결정이 된다.
  cout << userAge;

  return 0;
}
