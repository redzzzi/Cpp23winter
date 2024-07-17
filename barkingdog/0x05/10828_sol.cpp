#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  stack<int> S;

  while (n--) {
    string c;
    cin >> c;
    if (c == "push") {
      int t;
      cin >> t;
      S.push(t);
    }
    else if (c == "pop") {
      if (S.empty()) cout << -1 << '\n';
      else {
        cout << S.top() << '\n';
        S.pop();
      }
    }
    else if (c == "size") cout << S.size() << '\n';
    else {
      if (S.empty()) cout << -1 << '\n';
      else cout << S.top() << '\n';
    }
  }
}
