// 숫자 - 브론즈2
#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long long min, max, many;
  cin >> min >> max;
  if (max < min) {
    swap(min, max);
  }
  if (max == min || max - min == 1) {
    cout << 0;
  } else {
    many = max - min - 1;

    cout << many << '\n';
    for (long long i=min+1; i<max; i++) cout << i << ' ';
  } 

  return 0;
}
