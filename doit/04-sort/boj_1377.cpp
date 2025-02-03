#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int N = 0;
  cin >> N;
  vector<pair<int, int>> A(N, make_pair(0, 0)); // (정렬 '전' 인덱스, 정렬 '후' 인덱스)

  for (int i=0; i<N; i++) {
    cin >> A[i].first;
    A[i].second = i;
  }

  sort(A.begin(), A.end());

  int max_loop = 0;

  for (int i=0; i<N; i++) {
    if (max_loop < A[i].second - i) {
      max_loop = A[i].second - i;
    }
  }

  cout << max_loop + 1;

  return 0;
}
