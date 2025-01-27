#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int N = 0;
  cin >> N;

  vector<int> nums(N, 0); // N개의 요소, 0으로 초기화
  for (int i=0; i<N; i++) {
    cin >> nums[i];
  }

  for (int i=0; i<N-1; i++) {
    for (int j=0; j<N-i-1; j++) {
      if (nums[j] > nums[j+1]) {
        swap(nums[j], nums[j+1]);
      }
    }
  }

  for (auto c: nums) {
    cout << c << '\n';
  }

  return 0;
}
