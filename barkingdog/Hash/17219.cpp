#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  string addr, pw;
  cin >> n >> m;
  unordered_map<string, string> saved;
  while (n--) {
    cin >> addr >> pw;
    saved[addr] = pw;
  }
  while (m--) {
    cin >> addr;
    cout << saved[addr] << '\n';
  }
}
