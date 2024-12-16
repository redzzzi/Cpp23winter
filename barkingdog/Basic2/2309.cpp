// 일곱 난쟁이 - 브론즈1
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<int> vec(9);
  for (int i=0; i<9; i++) {
    cin >> vec[i];
  }
  sort(vec.begin(), vec.end());
  int diff = accumulate(vec.begin(), vec.end(), 0) - 100;
  bool found = false;

  for (int i=0; i<9 && !found; i++) {
    for (int j=0; j<9; j++) {
      if (vec[i] != vec[j] && vec[i] + vec[j] == diff) {
        vec.erase(vec.begin() + j);
        vec.erase(vec.begin() + i);
        found = true;
        break;
      }
    }
  }
  for (int i : vec) cout << i << '\n';
  return 0;
}
