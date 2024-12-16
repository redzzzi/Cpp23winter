#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  stack<int> S;
  int cnt = 1;
  string ans; // 난 벡터를 썼는데, 굳이 STL 쓸 필요없이 문자열형을 사용하였다.
  while (n--) {
    int t;
    cin >> t;
    while (cnt <= t) {
      S.push(cnt++);
      ans += "+\n";
    }
    if (S.top() != t) { // 입력값만큼 쌓거나 빼야하며 그것을 최상단값과 비교 
                        // 설명 : 4를 예로 들면, 4 숫자를 도달하기까지 스택이 쌓인다.
                        // 4에 도달했을 때 해당 수가 수열에 만드는 데 필요하기 때문에 pop된다.
      cout << "NO\n";
      return 0;
    }
    S.pop();
    ans += "-\n";
  }
  cout << ans;
}
