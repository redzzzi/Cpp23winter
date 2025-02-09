#include <iostream>
#include <vector>
using namespace std;

void merge_sort(int s, int e);
static vector<int> A;
static vector<int> tmp;
static long result;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int N = 0;
  cin >> N;

  A = vector<int>(N+1, 0);
  tmp = vector<int>(N+1, 0);

  for (int i=1; i<=N; i++) {
    cin >> A[i];
  }

  result = 0;
  merge_sort(1, N); 
  cout << result << '\n';
  
  return 0;
}

void merge_sort(int s, int e) {
  if (s >= e) return;

  int m = s + (e - s) / 2;
  
  merge_sort(s, m);
  merge_sort(m+1, e);

  for (int i=s; i<=e; i++) {
    tmp[i] = A[i];
  }

  int k = s;
  int idx1 = s;
  int idx2 = m+1;

  while (idx1 <= m && idx2 <= e) {
    if (tmp[idx1] > tmp[idx2]) { // 뒤쪽 데이터 값이 작아서 선택되는 경우
      A[k] = tmp[idx2];
      result = result + idx2 - k; 
      idx2++;
    } else { 
      A[k] = tmp[idx1];
      idx1++;
    }
    k++;
  }

  while (idx1 <= m) {
    A[k] = tmp[idx1];
    k++;
    idx1++;
  }
  while (idx2 <= e) {
    A[k] = tmp[idx2];
    k++;
    idx2++;
  }
}
