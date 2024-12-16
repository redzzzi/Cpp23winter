// 카드2 - 실버4
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N; 
  queue<int> Q;
  for (int i=1; i<=N; i++) {
    Q.push(i);
  }
  // while (!Q.empty()) {
  //   cout << Q.front() << ' ';
  //   Q.pop();
  // }
  // int index = 0;
  while (Q.size() > 1) {
    // cout << ++index << '\n';
    Q.pop();
    Q.push(Q.front());
    Q.pop();
  }
  cout << Q.front() << '\n';
}
