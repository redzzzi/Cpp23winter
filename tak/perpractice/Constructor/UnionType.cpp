#include <iostream>

using namespace std;

union SimpleUnion {
  int num;
  double preciseNum;
};

int main() {
  SimpleUnion u;
  u.preciseNum = 3.14; // union sotres a double
  u.num = 3.1666;
  // int num2 = u.num; // works, but u1 contained a double!
  cout << "u.preciseNum: " << u.preciseNum << endl;
  // cout << "u.num as num2: " << num2 << endl;
  cout << "u.num: " << u.num << endl;

  return 0;
}
