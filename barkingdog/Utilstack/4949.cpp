// 균형잡힌 세상 - 실버4
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (true) {
    string com;
    getline(cin, com);

    if (com == ".") break;

    stack<char> Pair;
    bool isPair = true;

    for (auto c : com) {
      if (c == '('|| c == '[')
        Pair.push(c);
      else if (c == ')') {
        if (Pair.empty()) {
          isPair = false;
          break;
        }
        if (Pair.top() != '(') {
          isPair = false;
          break;
        }
        Pair.pop();
      }
      else if (c == ']') {
        if (Pair.empty()) {
          isPair = false;
          break;
        }
        if (Pair.top() != '[') {
          isPair = false;
          break;
        }
        Pair.pop();
      }
    } 
    if (!Pair.empty()) {
      isPair = false;
    }

    if (isPair) cout << "yes" << '\n';
    else cout << "no" << '\n';
  }
}
