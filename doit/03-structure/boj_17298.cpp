#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main() {
  int n = 0;
  cin >> n;
  vector<int> A(n, 0);
  vector<int> result(n, 0);

  for (int i=0; i<n; i++) {
    cin >> A[i];
  }

  stack<int> idx;
  idx.push(0);
  for (int i=1; i<n; i++) {
    while (!idx.empty() && A[idx.top()] < A[i]) { // 큰수를 찾는 과정
      result[idx.top()] = A[i]; // 우선 넣어놓고
      idx.pop();
    }
    idx.push(i);
  }

  while (!idx.empty()) {
    result[idx.top()] = -1;
    idx.pop();
  }

  for (int k: result) {
    cout << k << " ";
  }

  return 0;
}
