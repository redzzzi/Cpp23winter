// 좋은 단어 - 실버4
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, ans = 0;
  cin >> N;
  while (N--) {
    string x;
    cin >> x;
    stack<char> S;
    for (auto c : x) {
      if (!S.empty() && c == S.top()) {
        S.pop();
      }
      else {
        S.push(c);
      }
    }
    if (S.empty())
      ans++;
  }
  cout << ans;
}
