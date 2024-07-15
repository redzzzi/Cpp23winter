// 에디터 - 실버2
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string word;
  cin >> word;
  list<char> lst;
  for (auto c : word) lst.push_back(c);
  auto cursor = lst.end();

  int num;
  cin >> num;

  for (int i=0; i<num; i++) {
    char com;
    cin >> com;
    if (com == 'P') {
      char sig;
      cin >> sig;
      lst.insert(cursor, sig);
    }
    else if (com == 'L') {
      if (cursor != lst.begin()) cursor--;
    }
    else if (com == 'D') {
      if (cursor != lst.end()) cursor++;
    } else {
      if (cursor != lst.begin()) {
        cursor--;
        cursor = lst.erase(cursor);
      }
    }
  }
  for (auto c : lst) cout << c;
}
