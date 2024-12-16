// 큐2 - 실버4
#include <bits/stdc++.h>
using namespace std;

int N;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  queue<int> Q;
  cin >> N;
  while (N--) {
    string op;
    cin >> op;
    if (op == "push") {
      int num;
      cin >> num;
      Q.push(num);
    }
    else if (op == "pop") {
      if (Q.empty()) cout << "-1\n";
      else {
        cout << Q.front() << '\n';
        Q.pop();
      }
    }
    else if (op == "size") {
      cout << Q.size() << '\n'; 
    }
    else if (op == "empty") {
      if (Q.empty()) cout << "1\n";
      else cout << "0\n";
    }
    else if (op == "front") {
      if (Q.empty()) cout << "-1\n";
      else {
        cout << Q.front() << '\n';
      }
    }
    else { // back
      if (Q.empty()) cout << "-1\n";
      else {
        cout << Q.back() << '\n';
      }
    }
  }
}
