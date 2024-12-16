// 스택 수열 - 실버2
#include <bits/stdc++.h>
using namespace std;

int n;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cin >> n; 
  stack<int> nums;
  vector<char> sig;
  int cur = 1;
  bool isNums = true;

  int max = 0; 
  while (n--) {
    int a;
    cin >> a;
    if (a >= cur) {
      for (int i=cur; i<=a; i++) {
        sig.push_back('+');
        nums.push(i);
        cur++; 
      }
    }
    if (!nums.empty() && nums.top() == a) {
      nums.pop();
      sig.push_back('-');
    }
    else {
      isNums = false;
    }
  }
  if (isNums) {
    for (auto x : sig) cout << x << '\n';
  }
  else cout << "NO" << '\n';
}
