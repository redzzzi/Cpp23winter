// 쇠막대기 - 실버2
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int ans = 0;
  string l;
  cin >> l;
  stack<char> S;
  for (int i=0; i<l.size(); i++) {
    if (l[i] == '(')
      S.push(l[i]);
    else {
      if (l[i-1] == '(') {
        S.pop();
        ans += S.size();
      }
      else {
        S.pop();
        ans++;
      }
    }
  } 
  cout << ans;
}
