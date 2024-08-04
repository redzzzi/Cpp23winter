// 괄호의 값 - 골드5
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string l;
  cin >> l;
  stack<char> S;
  int ans = 0;
  int mult = 1;
  for (int i=0; i<l.size(); i++) {
    if (l[i] == '(') {
      S.push(l[i]);
      mult *= 2;
    } 
    else if (l[i] == '[') {
      S.push(l[i]);
      mult *= 3;
    }
    else if (l[i] == ')') {
      if (S.empty() || S.top() != '(') {
        cout << 0;
        return 0;
      }
      if (l[i-1] == '(') {
        ans += mult;
      }
      S.pop();
      mult /= 2;
    }
    else { // l[i] == ']'
      if (S.empty() || S.top() != '[') {
        cout << 0;
        return 0;
      }
      if (l[i-1] == '[') {
        ans += mult;
      }
      S.pop();
      mult /= 3;
    }
  }
  if (S.empty()) cout << ans;
  else cout << 0;
}
