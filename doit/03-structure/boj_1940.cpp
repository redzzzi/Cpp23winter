#include <iostream>
#include <vector>
using namespace std;

void bubble_sort(vector<int> &copy, int n) {
  for (int i=0; i<n-1; i++) {
    for (int j=0; j<n-i-1; j++) {
      if (copy[j] > copy[j+1]) {
        int tmp = copy[j];
        copy[j] = copy[j+1];
        copy[j+1] = tmp;
      }
    }
  }
}

int main() {
  int n = 0, m = 0;
  cin >> n >> m;

  vector<int> mat(n, 0);
  for (int i=0; i<n; i++) {
    cin >> mat[i];
  }
  
  int count = 0;
  bubble_sort(mat, n);

  int start = 0, end = n-1;
  while (start < end) {
    int sum = mat[start] + mat[end];
    if (sum == m) {
      count++;
      start++;
      end--;
    } else if (sum < m) {
      start++; 
    } else { // sum > m
      end--;
    }
  }

  cout << count << '\n';
  
  return 0;
}
