#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n = 0;
  cin >> n;
  int start_index = 1, end_index = 1;
  int sum = 1, count = 1;

  while (end_index < n) {
    if (sum == n) {
      count++;
      // cout << "count: " << count << '\n';
      end_index++;
      sum += end_index;
      // cout << "sum == n" << '\n';
      // cout << "sum: " << sum << '\n';
      // cout << "end_index: " << end_index << '\n';
    } else if (sum > n) {
      sum -= start_index;
      start_index++;
      // cout << "sum > n" << '\n';
      // cout << "sum: " << sum << '\n';
      // cout << "start_index: " << start_index << '\n';
    } else { // sum < n
      end_index++;
      sum += end_index;
      // cout << "sum < n" << '\n';
      // cout << "sum: " << sum << '\n';
      // cout << "end_index: " << end_index << '\n';
    }
  }

  cout << count << '\n';
  return 0;
}
