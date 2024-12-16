// Strfry - 브론즈2
#include <bits/stdc++.h>
using namespace std;

int n;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cin >> n;
  while (n--) {
    int exist[26] = {0};
    string input1, input2;
    cin >> input1 >> input2;
    for (char c : input1) {
      exist[c-'a']++;
    }
    for (char c : input2) {

      exist[c-'a']--;
    }
    bool pair = true;
    for (int i=0; i<26; i++) {
      if (exist[i] != 0) {
        pair = false;
        break;
      }
    }
    if (pair) cout << "Possible" << '\n';
    else cout << "Impossible" << '\n';
    // for (int i=0; i<26; i++) {
    //   cout << exist[i] << ' ';
    // }
    // cout << '\n';
  }
}
