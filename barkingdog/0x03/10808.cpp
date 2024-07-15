// 알파벳 개수 - 브론즈4
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string word;
  cin >> word;
  for (char a = 'a'; a <= 'z'; a++) {
    int count = 0;
    for (auto cnt : word) {
      if (a == cnt) count++;
    }
    cout << count << ' ';
  }
}
