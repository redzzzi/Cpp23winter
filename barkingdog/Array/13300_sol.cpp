#include <bits/stdc++.h>
using namespace std;

int N, K, ans = 0;
int s[2][7] = {};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> N >> K;
  for (int i=0; i<N; ++i) {
    int a, b;
    cin >> a >> b;
    s[a][b]++;
  }

  for (int i=0; i<2; ++i) {
    for (int j=0; j<7; ++j) {
      ans += s[i][j] / K;
      if (s[i][j] % K) ++ans;
    }
  }
  cout << ans;
}
