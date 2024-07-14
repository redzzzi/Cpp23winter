// 대표값2 - 브론즈2
// 어떤 수들이 있을 때, 그 수들을 대표하는 값으로 가장 흔하게 쓰이는 것은 평균이다.
// 평균은 주어진 모든 수의 합을 수의 개수로 나눈 것이다.
// 예를 들어 10, 40, 30, 60, 30의 평균은 (10 + 40 + 30 + 60 + 30) / 5 = 170 / 5 = 34가 된다.
// 평균 이외의 또 다른 대표값으로 중앙값이라는 것이 있다.
// 중앙값은 주어진 수를 크기 순서대로 늘어 놓았을 때 가장 중앙에 놓인 값이다.
// 예를 들어 10, 40, 30, 60, 30의 경우, 크기 순서대로 늘어 놓으면
// 10 30 30 40 60
// 이 되고 따라서 중앙값은 30이 된다.
// 다섯 개의 자연수가 주어질 때 이들의 평균과 중앙값을 구하는 프로그램을 작성하시오.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool ascending(int x, int y) {
  return x < y;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int nums[5], sum = 0, avg, med;

  for (int i=0; i<5; i++) {
    cin >> nums[i];
  }
  for (int i=0; i<5; i++) {
    sum += nums[i];
  }
  avg = sum / 5;
  cout << avg << '\n';
  
  sort(nums, nums+5, ascending);
  cout << nums[2];

  return 0;
}
