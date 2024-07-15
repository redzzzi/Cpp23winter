#include <bits/stdc++.h>
using namespace std;

int freq[26];
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;
  cin >> s;
  for (auto c : s) { // 문자열에 대해
    freq[c-'a']++;   // 해당되는 알파벳 인덱스에서 +1
  }
  for (int i=0; i<26; i++) {
    cout << freq[i] << ' ';
  }
}
