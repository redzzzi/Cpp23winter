#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &cpy, int left, int right) {
  int mid = left + (right - left) / 2;
  int lsize = mid - left + 1;
  int rsize = right - mid;

  vector<int> leftCpy(lsize);
  vector<int> rightCpy(rsize);

  for (int i=0; i<lsize; i++) {
    leftCpy[i] = cpy[left + i];
  }

  for (int i=0; i<rsize; i++) {
    rightCpy[i] = cpy[mid + i + 1];
  }

  int i = 0, j = 0, k = left;
  while (i < lsize && j < rsize) {
    if (leftCpy[i] <= rightCpy[j]) {
      cpy[k] = leftCpy[i];
      i++;
    } else {
      cpy[k] = rightCpy[j];
      j++;
    }
    k++;
  }

  while (i < lsize) {
    cpy[k] = leftCpy[i];
    i++;
    k++;
  }
  while (j < rsize) {
    cpy[k] = rightCpy[j];
    j++;
    k++;
  }
}

void mergeSort(vector<int> &cpy, int left, int right) {
  if (left < right) {
    int mid = left + (right - left) / 2;
    
    mergeSort(cpy, left, mid);
    mergeSort(cpy, mid + 1, right);

    merge(cpy, left, right);
  }
}

int main() {
  int n;
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
