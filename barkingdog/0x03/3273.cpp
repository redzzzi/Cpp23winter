// 두 수의 합 - 실버3
#include <bits/stdc++.h>
using namespace std;

int main() {
  int size, x, ans = 0;
  cin >> size;
  int nums[size];
  for (int i=0; i<size; i++)
    cin >> nums[i];
  cin >> x;
  sort(nums, nums+size);

  // for (int k : nums) cout << k << '\n';
  for (int i=0; i<size; i++) {
    for (int j=i+1; j<size; j++) {
      if (nums[i] + nums[j] == x) {
        ans++;
        // cout << '(' << nums[i] << ", " << nums[j] << ')' << '\n';
      }
    }
  }

  cout << ans;
}
