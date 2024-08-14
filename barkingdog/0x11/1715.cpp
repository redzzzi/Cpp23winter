#include <bits/stdc++.h>
#include <queue>
using namespace std;

int main() {
  int N;
  cin >> N;
  priority_queue<int, vector<int>, greater<int>> nums;
  while (N--) {
    int x;
    cin >> x;
    nums.push(x);
  }
  int ans = 0;
  while (nums.size() > 1) {
    int a = nums.top();
    nums.pop();
    int b = nums.top();
    nums.pop();
    ans += a + b;
    nums.push(a+b);
  }
  cout << ans;
}
