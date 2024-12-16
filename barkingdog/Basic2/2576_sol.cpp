// 홀수 - 브론즈3
#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int x, odd = 0, sum = 0, min = 100;

  for (int i=0; i<7; i++) {
    cin >> x;
    if (x & 1) { // 1과 AND 연산을 통해 홀수 판단
      odd += 1;
      sum += x;
      if (x < min) { // 최솟값 찾는 과정
        min = x;
      }
    }
  }
  
  if (odd) cout << sum << '\n' << min;
  else cout << "-1"; // 홀수가 없을 경우
}
