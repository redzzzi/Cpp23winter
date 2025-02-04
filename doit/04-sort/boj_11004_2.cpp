#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr, int start, int end) {
  if (arr.size() == 2 && arr[start] > arr[end]) {
    swap(arr[start], arr[end]);
  }
  int mid = start + (end - start) / 2; // 중앙값
  int pivot_val = arr[mid];
  swap(arr[mid], arr[start]); // 중앙값을 시작 위치와 swap

  int i = start + 1;
  int j = end;
  while (i <= j) {
    while (i <= end && pivot_val > arr[i]) {
      i++; 
    }
    while (j >= start && pivot_val < arr[j]) {
      j--;
    }
    if (i < j) {
      swap(arr[i++], arr[j--]); // 각 마지막 while 문에 추가 연산됐으므로
    } else break;
  }
  arr[start] = arr[j]; // pivot을 처음에 start 인덱스로 옮겼기 때문에, 복구!
                       // pivot을 end에서 옮겨온 j 인덱스로 이동
  arr[j] = pivot_val; // 따라서 pivot의 왼쪽은 작은 수 리스트, 오른쪽은 큰 수 리스트
  return j;
}

void quick_sort(vector<int> &arr, int start, int end, int k) {
  int pivot_idx = partition(arr, start, end);
  int pivot_val = arr[pivot_idx];
  if (pivot_val == k) return;
  else if (k < pivot_val) {
    quick_sort(arr, start, pivot_idx-1, k);
  } else {
    quick_sort(arr, pivot_idx+1, end, k);
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int N, K;
  cin >> N >> K;
  vector<int> A(N);
  for (int i=0; i<N; i++) {
    cin >> A[i];
  }

  quick_sort(A, 0, N-1, K-1);
  int ans = A[K-1];
  cout << ans << '\n';

  return 0;
}
