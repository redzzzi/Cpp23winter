#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int N = 0;
  cin >> N;
  vector<int> A(N, 0);
  for (int i=0; i<N; i++) {
    cin >> A[i];
  }

  for (int i=1; i<N; i++) {
    int insert_idx = i; // 삽입할 위치와 비교해야 shift 가능
    int insert_val = A[i];
    for (int j=i-1; j>=0; j--) { // i 기준으로 왼쪽에 있는 요소와 비교
      if (A[i] > A[j]) { // 이미 앞부분은 정렬되어 삽입 필요 없는 경우
        insert_idx = j + 1; 
        break;
      }
      if (j == 0) {
        insert_idx = 0;
      }
    }
    for (int j=i; j>insert_idx; j--) {
      A[j] = A[j-1];
    }
    A[insert_idx] = insert_val;
  }

  int min_time = 0;
  vector<int> S(N);
  S[0] = A[0];
  for (int i=1; i<N; i++) {
    S[i] = S[i-1] + A[i];
  }

  for (int i=0; i<N; i++) {
    min_time += S[i];
  }

  cout << min_time << '\n';

  return 0;
}
