#include <iostream>
#include <vector>
using namespace std;

void bubble_sort(vector<int> &copy, int n) {
  for (int i=0; i<n-1; i++) {
    for (int j=0; j<n-i-1; j++) {
      if (copy[j] > copy[j+1]) {
        int tmp = copy[j];
        copy[j] = copy[j+1];
        copy[j+1] = tmp;
      }
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n=0;
  cin >> n;
  vector<int> A(n, 0);
  for (int i=0; i<n; i++) {
    cin >> A[i];
  }

  bubble_sort(A, n);

  for (auto k: A) {
    cout << k << '\n';
  }

  return 0;
}
