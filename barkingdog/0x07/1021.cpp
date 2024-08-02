// 회전하는 큐 - 실버3
#include <bits/stdc++.h>
using namespace std;

int N, M, ans = 0; // N - 큐의 크기, M - 뽑아내려고 하는 개수
deque<int> DQ;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> N >> M;
  for (int i=1; i<=N; i++)
    DQ.push_back(i);
  while (M--) {
    int x;
    cin >> x;
    int idx = find(DQ.begin(), DQ.end(), x) - DQ.begin();
    while (DQ.front() != x) {
      if (idx < DQ.size() - idx) {
        DQ.push_back(DQ.front());
        DQ.pop_front();
      }
      else {
        DQ.push_front(DQ.back());
        DQ.pop_back();
      }
      ans++;
    }
    DQ.pop_front();
  }
  cout << ans;
}
