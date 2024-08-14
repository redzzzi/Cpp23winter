#include <bits/stdc++.h>
using namespace std;

struct cmp {
  bool operator()(int a, int b) {
    if (abs(a) != abs(b))
      return abs(a) > abs(b);
    return a > 0 && b < 0;
  }
};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int N, x, ans_num = 0;
  cin >> N;
  priority_queue<int, vector<int>, cmp> P;
  while (N--) {
    cin >> x;
    if (x == 0) {
      if (P.empty())
        cout << "0\n";
      else {
        cout << P.top() << '\n';
        P.pop();
      }
    }
    else
      P.push(x);
  }
}
