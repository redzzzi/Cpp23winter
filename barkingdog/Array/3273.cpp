// 두 수의 합 - 실버3
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int size, x, ans = 0;
  cin >> size;
  int nums[size];
  for (int i=0; i<size; i++)
    cin >> nums[i];
  cin >> x;
  sort(nums, nums+size);

  int k=0;
  bool no_more = false;
  for (int i=0; i<size; i++) {
    for (int j=i+1; j<size; j++) {
      if (nums[i] + nums[j] > x) {
        break;
        no_more = true;
      }
      if (nums[i] + nums[j] == x) {
        ans++;
        break;
      }
      // cout << '(' << nums[i] << ", " << nums[j] << ')' << '\n';
    }
    if (no_more) break;
  }

  cout << ans;
}
