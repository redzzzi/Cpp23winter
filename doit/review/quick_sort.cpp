#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr, int start, int end);
void quick_sort(vector<int> &arr, int start, int end);

int main() {
  int n = 0; 
  cin >> n;
  vector<int> A(n, 0);
  
  for (int i=0; i<n; i++) {
    cin >> A[i];
  }

  quick_sort(A, 0, n-1);

  for (auto k: A) {
    cout << k << " ";
  }

  return 0;
}

int partition(vector<int> &arr, int start, int end) {
  int mid = start + (end - start) / 2;
  int pivot_val = arr[mid];
  
  swap(arr[mid], arr[end]);

  int i = start - 1;
  for (int j=start; j<end; j++) { // pivot이 end 인덱스로 가기 때문에 신경쓰지 않는다!
    if (arr[j] < pivot_val) {
      i++; // start++ 느낌
      swap(arr[j], arr[i]);
    }
  } 
  swap(arr[i+1], arr[end]); // pivot 값을 배열의 마지막에 두는 게 일반적
  return i+1;
}

void quick_sort(vector<int> &arr, int start, int end) {

  if (start >= end) return;

  int pivot_idx = partition(arr, start, end);
  
  quick_sort(arr, start, pivot_idx - 1);
  quick_sort(arr, pivot_idx + 1, end);
}
