#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  string num_lst;
  cin >> num_lst;

  int n = num_lst.size();

  vector<char> A(n);
  for (int i=0; i<n; i++) {
    A[i] = num_lst[i];
  }

  // for (auto k: A) {
  //   cout << k << " ";
  // }
  
  for (int i=0; i<n; i++) {
    int max_idx = max_element(A.begin()+i, A.end()) - A.begin();
    if (A[i] < A[max_idx]) { 
      swap(A[i], A[max_idx]);
    }
  } 

  string ans = "";

  for (int i=0; i<n; i++) {
    ans += A[i]; 
  }

  cout << ans;

  return 0;
}
