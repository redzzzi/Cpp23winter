// 홀수 - 브론즈3
// 7개의 자연수가 주어질 때, 이들 중 홀수인 자연수들을 모두 골라 그 합을 구하고,
// 고른 홀수들 중 최솟값을 찾는 프로그램을 작성하시오.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int num;
  int sum = 0;
  vector<int> numbers = {};
  for (int i=0; i<7; i++) {
    cin >> num;
    if (num % 2 != 0) {
      sum += num;
      numbers.push_back(num);
    }
  }
  int min = *min_element(numbers.begin(), numbers.end());
  cout << sum << '\n';
  cout << min << '\n';

  return 0;
}
