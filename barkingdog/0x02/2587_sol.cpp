// 대표값2 - 브론즈2
#include <bits/stdc++.h>
using namespace std;

int num[5], total;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  for (int i=0; i<5; i++) cin >> num[i];

  for (int i=0; i<5; i++) total += num[i];
  cout << total / 5 << '\n';

  sort(num, num+5);
  cout << num[2];
}
