// 방 번호 - 실버5
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int freq[10];

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string number;
  cin >> number;
  for (auto c : number) {
    freq[c-'0']++;
  }
  int sum = freq[6]+freq[9];
  freq[6] = sum/2;
  freq[9] = sum - freq[6];

  cout << *max_element(freq, freq+10);
}
