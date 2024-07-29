// 제로 - 실버4
#include <bits/stdc++.h>
using namespace std;

int K, ans=0;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cin >> K;
  stack<int> book;

  while (K--) {
    int n;
    cin >> n;
    if (!book.empty() && n == 0)
      book.pop();
    else
      book.push(n);
  }
  while (!book.empty()) {
    ans += book.top();
    book.pop();
  }
  cout << ans << '\n';
}
