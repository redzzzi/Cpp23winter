#include <bits/stdc++.h>
using namespace std;

int a[1000001] = {};
bool occur[2000001];
int n, x;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int ans = 0;
  cin >> n;
  for (int i=0; i<n; i++) cin >> a[i];
  cin >> x;

  for (int i=0; i<n; i++) {
    // x - a[i]가 존재하는지 확인한다.
    occur[a[i]] = true;
    if (x-a[i] > 0 && occur[x-a[i]]) ans++;
  }
  cout << ans;
}
