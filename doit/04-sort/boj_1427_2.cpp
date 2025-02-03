#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  string inp;
  cin >> inp;

  int n = inp.size();
  vector<int> A(n, 0);
  for (int i=0; i<n; i++) {
    A[i] = stoi(inp.substr(i, 1)); 
  }

  for (int i=0; i<n; i++) {
    int max_idx = i;
    for (int j=i+1; j<n; j++) {
      if (A[max_idx] < A[j]) {
        max_idx = j;
      }
    }
    if (A[i] < A[max_idx]) {
      int tmp = A[i];
      A[i] = A[max_idx];
      A[max_idx] = tmp;
    }
  }

  for (auto k: A) {
    cout << k;
  }

  return 0;
}
