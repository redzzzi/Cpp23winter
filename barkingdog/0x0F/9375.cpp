#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int k;
  cin >> k;
  while (k--) {
    int n;
    cin >> n;
    unordered_map<string, int> M;
    while (n--) {
      string gar, type;
      cin >> gar >> type;
      M[type]++;
    }
    int ans = 1;
    for (auto e : M) {
      ans *= e.second + 1;
    }
    cout << ans - 1 << '\n';
  }
}
