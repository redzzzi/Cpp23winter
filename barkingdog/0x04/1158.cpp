// 요세푸스 문제 - 실버4
#include <bits/stdc++.h>
using namespace std;

int N, K;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cin >> N >> K;
  list<int> circle = {};
  for (int i=1; i<=N; ++i)
    circle.push_back(i);
  auto pos = circle.begin();
  list<int> result;
  while (!circle.empty()) {
    for (int i=1; i<K; i++) {
      pos++;
      if (pos == circle.end()) pos = circle.begin();
    }
    result.push_back(*pos);
    pos = circle.erase(pos);
    if (pos == circle.end()) pos = circle.begin();
  }
  cout << '<';
  auto it = result.begin();
  if (it != result.end()) {
    cout << *it;
    ++it;
  }
  for (; it != result.end(); ++it) {
    cout << ", " << *it;
  }
  cout << '>' << '\n';
  // for (auto c : result) cout << c << ' ';
}
