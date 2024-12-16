// 세수정렬
// 브론즈4
// 동규는 세수를 하다가 정렬이 하고 싶어졌다.
// 정수 세 개를 생각한 뒤에, 이를 오름차순으로 정렬하고 싶어졌다.
// 정수 세 개가 주어졌을 때,
// 가장 작은 수, 그 다음 수, 가장 큰 수를 출력하는 프로그램을 작성하시오.
#include <iostream>
#include <algorithm>
using namespace std;

bool ascending(int x, int y) {
  return x < y;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int a, b, c;
  cin >> a >> b >> c;
  vector<int> v = { a, b, c };
  sort(v.begin(), v.end(), ascending);
  for (int i : v) {
    cout << i << " ";
  }

  return 0;
}
