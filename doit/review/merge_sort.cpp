#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &copy, int left, int right) {
  int mid = left + (right - left) / 2;
  int lsize = mid - left + 1;
  int rsize = right - mid;

  vector<int> lcopy(lsize);
  vector<int> rcopy(rsize);

  for (int i=0; i<lsize; i++) {
    lcopy[i] = copy[left+i];
  }
  for (int i=0; i<rsize; i++) {
    rcopy[i] = copy[mid+i+1];
  }

  int i=0, j=0, k=left;
  while (i<lsize && j<rsize) {
    if (lcopy[i] <= rcopy[j]) {
      copy[k] = lcopy[i];
      i++;
    } else {
      copy[k] = rcopy[j];
      j++;
    }
    k++;
  }

  while (i < lsize) {
    copy[k] = lcopy[i];
    i++;
    k++;
  }
  while (j < rsize) {
    copy[k] = rcopy[j];
    j++;
    k++;
  }
}

void mergeSort(vector<int> &copy, int left, int right) {
  if (left < right) {
    int mid = left + (right - left) / 2;
    
    mergeSort(copy, left, mid);
    mergeSort(copy, mid+1, right);

    merge(copy, left, right);
  }
}

int main() {
  int n = 0;
  cin >> n;
  vector<int> nums(n, 0);

  for (int i=0; i<n; i++) {
    cin >> nums[i];
  }

  mergeSort(nums, 0, n-1);

  for (auto c: nums) {
    cout << c << '\n';
  }

  return 0;
}
