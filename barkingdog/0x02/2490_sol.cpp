// 윷놀이 - 브론즈3
#include <iostream>
using namespace std;

int result, input;;
string judge = "DCBAE";

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  for (int r=0; r<3; r++) {
    result = 0;
    for (int c=0; c<4; c++) {
      cin >> input;
      result += input;
    }
    cout << judge[result] << '\n';
  }
}
