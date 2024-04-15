#include <iostream>

using namespace std;
constexpr double GetPI() { return 22.0 / 7; }

int main() {
  cout << "Hello World!" << endl;
  cout << GetPI() << endl;

  int age;
  cin >> age;
  const int userAge = age;
  cout << userAge;

  return 0;
}
