// 애너그램 만들기 - 브론즈2
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string input1, input2;
  cin >> input1 >> input2;
  int freq1[26] = {0}, freq2[26] = {0};
  for (char c : input1) {
    freq1[c-'a']++;
  }
  for (char c : input2) {
    freq2[c-'a']++;
  }
  int ans = 0;
  for (int i=0; i<26; i++) {
    if (freq1[i] == freq2[i]) continue;
    else if (freq1[i] > 0 && freq2[i] > 0) {
      ans += abs(freq1[i]-freq2[i]);
    }
    else ans += freq1[i] + freq2[i];
  }
  cout << ans << '\n';
}
