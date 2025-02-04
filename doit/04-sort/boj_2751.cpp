#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int l, int r);
void merge_sort(vector<int> &arr, int l, int r);

int main() {
  int N = 0;
  cin >> N;
  vector<int> A(N);
  for (int i=0; i<N; i++) {
    cin >> A[i];
  }

  merge_sort(A, 0, N-1);

  for (int k: A) {
    cout << k << '\n';
  }

  return 0;
}

void merge(vector<int> &arr, int l, int r) {
  int mid = l + (r - l) / 2;
  int lsize = mid - l + 1;
  int rsize = r - mid;
  vector<int> larr(lsize);
  vector<int> rarr(rsize);
  for (int i=0; i<lsize; i++) {
    larr[i] = arr[l+i];
  }
  for (int i=0; i<rsize; i++) {
    rarr[i] = arr[mid+i+1];
  }

  int i=0, j=0, k=l;
  while (i<lsize && j<rsize) {
    if (larr[i] <= rarr[j]) {
      arr[k] = larr[i];
      i++;
    } else {
      arr[k] = rarr[j];
      j++;
    }
    k++;
  }

  while (i<lsize) {
    arr[k] = larr[i];
    i++;
    k++;
  }
  while (j<rsize) {
    arr[k] = rarr[j];
    j++;
    k++;
  }
}

void merge_sort(vector<int> &arr, int l, int r) {
  if (l >= r) return;
  int mid = l + (r - l) / 2;
  merge_sort(arr, l, mid);
  merge_sort(arr, mid+1, r);
  merge(arr, l, r);
}
