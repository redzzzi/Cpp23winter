#include <iostream>

using namespace std;

int nSum(int& n) {
  int i;
  // base condition to terminate the recursion when N = 0
  if (n == 0) {
    n = 1;
    return 0;
  }
      // recursive case / recursive call
  n = n - 1;
  cout << "n : " << n << endl;
  int res = n + nSum(n);
  // int res = nSum(n) + n;
  
  return res;
}

int main() {
  int n = 5;
  
  int result = nSum(n);
  cout << "Recursive Sum of " << 5 << " : " << result << endl;
  return 0;
}
