#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N, a[10] = {}, ans = 0;
  cin >> N;

  // 자릿수를 추출한다.
  while (N) {
    a[N%10]++;
    N /= 10;
  }

  for (int i=0; i<10; i++) {
    if (i == 6 || i == 9) continue; // 해당 인덱스 뛰어넘기
    ans = max(ans, a[i]);
  }

  ans = max(ans, (a[6]+a[9]+1)/2);
  cout << ans;
}
