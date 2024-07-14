// 윷놀이 - 브론즈3
// 우리나라 고유의 윷놀이는 네 개의 윷짝을 던져서 배(0)와 등(1)이 나오는 숫자를 세어
// 도, 개, 걸, 윷, 모를 결정한다.
// 네 개 윷짝을 던져서 나온 각 윷짝의 배 혹은 등 정보가 주어질 때 
// 도(배 한 개, 등 세 개), 개(배 두 개, 등 두 개), 걸(배 세 개, 등 한 개), 윷(배 네 개), 모(등 네 개) 중
// 어떤 것인지를 결정하는 프로그램을 작성하라.
// 도 - A, 개 - B, 걸 - C, 윷 - D, 모 - E
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void judge(int bae) {
  switch(bae) {
    case 0:
      cout << "E\n";
      break;
    case 1:
      cout << "A\n";
      break;
    case 2:
      cout << "B\n";
      break;
    case 3:
      cout << "C\n";
      break;
    case 4:
      cout << "D\n";
      break;
    default:
      break;
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int x1, x2, x3, x4;
  for (int i = 0; i < 3; i++) {
    cin >> x1 >> x2 >> x3 >> x4;
    vector<int> v = { x1, x2, x3, x4 };
    int zero = count(v.begin(), v.end(), 0);
    judge(zero);
  }
  return 0;
}
