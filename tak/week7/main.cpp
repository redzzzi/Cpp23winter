#include <iostream>

using namespace std;

class Foo {                                       // 4
public:
  int _i;
  constexpr explicit Foo(int i): _i{i} {}
  constexpr int GetValue() const {
    return _i;
  }
};

template <typename T, int N>                      // 5
constexpr int length(const T(&)[N]) {
  return N;
}

constexpr double GetPI() { return 22.0 / 7; }     // 1
constexpr int myaddition(int i, int j) {          // 2
  return i + j;
}
const int myconstaddition(int i, int j) {         // 3
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
  // constexpr int x = myconstaddition(10, 10); // 에러 남

  // foo is const!!!
  constexpr Foo foo(5);
  const int nums[] {1, 2, 3, 4};
  const int nums2[length(nums)*2] {1, 2, 3, 4, 5, 6, 7, 8};
  cout << GetPI() << endl;

  cout << foo.GetValue() << endl;

  return 0;
}
