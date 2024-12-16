// 키로거 - 실버2
#include <bits/stdc++.h>
using namespace std;

int n;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cin >> n;
  string log;
  list<char> lst = {};
  while (n--) {
    cin >> log;
    list<char> lst;
    auto cursor = lst.begin();
    for (auto c : log) {
      if (c == '<') {
        if (cursor != lst.begin()) cursor--;
      }
      else if (c == '>') {
        if (cursor != lst.end()) cursor++;
      }
      else if (c == '-') {
        if (cursor != lst.begin()) cursor = lst.erase(--cursor);
      }
      else {
        lst.insert(cursor, c);
      }
    }
    for (auto c : lst) cout << c;
    cout << '\n';
  }
}
