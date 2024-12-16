// 회사에 있는 사람 - 실버5
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int N;
  cin >> N;
  unordered_map<string, string> G;
  while (N--) {
    string name, status;
    cin >> name >> status;
    G[name] = status;
  }
  vector<string> stay;
  for (auto e : G) {
    if (e.second == "enter") {
      stay.push_back(e.first);
    }
  }
  sort(stay.rbegin(), stay.rend());
  for (auto c : stay) cout << c << '\n';
}
