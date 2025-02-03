#include <iostream>
#include <queue>
using namespace std;

struct absCompare {
  bool operator()(int a, int b) {
    if (abs(a) != abs(b)) {
      return abs(a) > abs(b);
    }
    return a > 0 && b < 0;
  }
};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n = 0;
  cin >> n;
  priority_queue<int, vector<int>, absCompare> heap;

  while (n--) {
    int q = 0;
    cin >> q;

    if (q == 0) {
      if (heap.empty()) {
        cout << 0 << '\n';
      } else {
        cout << heap.top() << '\n';
        heap.pop();
      }
    } else {
      heap.push(q);
    }
  }

  return 0;
}
