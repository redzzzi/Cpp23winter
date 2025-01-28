#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n = 0;
  cin >> n;
  vector<int> nums(n, 0);
  for (int i=0; i<n; i++) {
    cin >> nums[i];
  }

  // bubble sort
  for (int i=0; i<n-1; i++) {
    for (int j=0; j<n-i-1; j++) {
      if (nums[j] > nums[j+1]) {
        int tmp = nums[j];
        nums[j] = nums[j+1];
        nums[j+1] = tmp;
      }
    }
  }

  for (auto c: nums) {
    cout << c << '\n';
  }

  return 0;
}
