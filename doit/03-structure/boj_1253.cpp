#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int n = 0;
  cin >> n;

  vector<int> nums(n,0);
  for (int i=0; i<n; i++) {
    cin >> nums[i];
  }

  sort(nums.begin(), nums.end());

  int ans = 0;
  for (int i=0; i<n; i++) {
    int find = nums[i];
    int start = 0, end = n-1;

    while (start < end) {
      int sum = nums[start] + nums[end];
      if (sum == find) {
        if (start != i && end != i) {
          ans++;
          // cout << "1 ans: " << ans << ", " << "start: " << start << ", "  "end: " << end << '\n';
          break;
        }
        else if (start == i) { // 없애면 시간 초과
          start++;
          // cout << "2 ans: " << ans << ", " << "start: " << start << ", "  "end: " << end << '\n';
        }
        else if (end == i) {
          end--;
          // cout << "3 ans: " << ans << ", " << "start: " << start << ", "  "end: " << end << '\n';
        }
      } else if (sum < find) {
        start++;
          // cout << "4 ans: " << ans << ", " << "start: " << start << ", "  "end: " << end << '\n';
      } else {
        end--;
          // cout << "5 ans: " << ans << ", " << "start: " << start << ", "  "end: " << end << '\n';
      }
    }
  }

  cout << ans << '\n';

  return 0;
}
