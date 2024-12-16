// 숫자의 개수 - 브론즈2
#include <bits/stdc++.h>
using namespace std;

int freq[10];

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int a, b, c;
  cin >> a >> b >> c;
  string mult = to_string(a * b * c);
  // cout << mult << '\n';
  for (auto c : mult) {
    freq[c-'0']++;
  }
  for (int i=0; i<10; i++)
    cout << freq[i] << '\n';

  return 0;
}
