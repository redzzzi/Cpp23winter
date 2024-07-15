// 에디터 - 실버2
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string word;
  cin >> word;
  string::iterator cursor = word.end();
  int num;
  cin >> num;
  for (int i=0; i<num; i++) {
    char com;
    cin >> com;
    if (com == 'P') {
      char sig;
      cin >> sig;
      word.insert(cursor, sig);
      cursor++;
      // cout << word << '\n';
    }
    else if (com == 'L') {
      if (cursor != word.begin()) cursor--;
      // cout << word << '\n';
    }
    else if (com == 'D') {
      if (cursor != word.end()) cursor++;
      // cout << word << '\n';
    } else {
      if (cursor != word.begin()) {
        cursor--;
        cursor = word.erase(cursor);
        // cout << word << '\n';
      }
    }
  }
  cout << word;
}
