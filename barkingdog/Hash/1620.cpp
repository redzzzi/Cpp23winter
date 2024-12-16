// 나는야 포켓몬 마스터 이다솜 - 실버4
#include <bits/stdc++.h>
using namespace std;
int N, M;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cin >> N >> M;
  unordered_map<string, int> P;
  vector<string> numToname(N+1);
  for (int i=1; i<=N; i++) {
    string name;
    cin >> name;
    P[name] = i;
    numToname[i] = name;
  }
  while (M--) {
    string q;
    cin >> q;
    if (q[0] >= 65) {
      cout << P[q] << '\n';
    }
    else {
      int n = stoi(q);
      cout << numToname[n] << '\n'; 
    }
  }
}
