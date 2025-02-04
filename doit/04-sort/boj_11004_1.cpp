#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr, int start, int end, int k) {
  int mid = start + (end - start) / 2;
  int pivot_val = arr[mid];

  int i = start - 1;
  swap(arr[mid], arr[end]);
  for (int j=start; j<end; j++) {
    if (arr[j] < pivot_val) {
      i++;
      swap(arr[j], arr[i]);
    }
  }
  swap(arr[i+1], arr[end]);
  return i+1;
}

void quick_sort(vector<int> &arr, int start, int end, int k) {
  if (start >= end) return;
  
  int pivot_idx = partition(arr, start, end, k);
  if (arr[pivot_idx] == k) return;
  quick_sort(arr, start, pivot_idx, k);
  quick_sort(arr, pivot_idx+1, end, k);
}

int main() {
  int N = 0, K = 0;
  cin >> N >> K;

  vector<int> A(N);
  for (int i=0; i<N; i++) {
    cin >> A[i];
  }

  quick_sort(A, 0, N-1, K);
  // for (auto k: A) {
  //   cout << k << " ";
  // }

  cout << A[K-1] << '\n';

  return 0;
}
