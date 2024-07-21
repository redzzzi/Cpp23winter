#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int a, b, c;
  cin >> a >> b >> c;
  int t = a * b * c;
  int d[10] = {};
  // 계산 결과를 자릿수별로 확인하여 저장한다.
  while (t > 0) {
    d[t%10]++;
    t/=10;
  }
  for (int i=0; i<10; ++i) cout << d[i] << '\n';
}
