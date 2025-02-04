#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int count[10001] = {0};
  int N = 0;
  cin >> N;

  int max = 0;
  for (int i=0; i<N; i++) {
    int idx = 0;
    cin >> idx;
    count[idx]++;
    if (idx > max) max = idx;
  }

  for (int i=0; i<max+1; i++) {
    if (count[i] != 0) {
      while (count[i]--) {
        cout << i << '\n';
      }
    }
  }
  return 0;
}
