#include <iostream>
using namespace std;

int main() {
  int n=0; 
  cin >> n;
  string nums;
  cin >> nums;

  int sum = 0;

  // for (int i=0; i<nums.length(); i++) {
  for (int i=0; i<n; i++) {
    sum += nums[i] - '0';
  }
  
  cout << sum << '\n';

  return 0;
}
