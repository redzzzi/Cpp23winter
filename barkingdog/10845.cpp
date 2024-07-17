#include <bits/stdc++.h>
using namespace std;

// const int MAX = 1000005;
// int dat[MAX];
// int head = 0, tail = 0;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int line;
  cin >> line;
  queue<int> Que;
  while (line--) {
    string com;
    cin >> com;
    if (com == "push") {
      int num;
      cin >> num;
      Que.push(num);
    }
    else if (com == "pop") {
      if (Que.empty()) cout << -1 << '\n';
      else {
        cout << Que.back() << '\n';
        Que.pop();
      }
    }
    else if (com == "size") {
      cout << Que.size() << '\n';
    }
    else if (com == "front") {
      if (Que.empty()) cout << -1 << '\n';
      else cout << Que.front() << '\n';
    }
    else if (com == "back") {
      if (Que.empty()) cout << -1 << '\n';
      else cout << Que.back() << '\n';
    }
    else { // empty
      if (Que.empty()) cout << 1 << '\n';
      else cout << 0 << '\n';
    }
  }
}
