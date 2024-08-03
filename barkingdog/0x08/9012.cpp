// 괄호 - 실버4
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  cin >> N;
  while (N--) {
    string p;
    cin >> p;
    bool isPair = true;
    stack<char> S;
    for (auto c : p) {
      if (c == '(')
        S.push(c);
      else {
        if (S.empty() || S.top() != '(') {
          isPair = false;
          break;
        }
        S.pop();
      }
    }
    if (!S.empty()) 
      isPair = false;
    if (isPair) cout << "YES\n";
    else cout << "NO\n";
  }
}
