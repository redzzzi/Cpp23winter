#include <iostream>
#include <vector>
using namespace std;

// 개별 점수를 일일이 구할 경우 로직이 복잡해짐
float getMax(vector<float> &copy, int n) {
  float max=0;
  for (int i=0; i<n; i++) {
    if (copy[i] > max) {
      max = copy[i];
    }
  }
  return max;
}

float getSum(vector<float> &copy, int n) {
  float sum=0;
  for (int i=0; i<n; i++) {
    sum += copy[i];
  }
  return sum;
}

int main() {
  int n=0; 
  cin >> n;
  vector<float> scores(n, 0);
  for (int i=0; i<n; i++) {
    cin >> scores[i];
  }
  
  float max_score = getMax(scores, n);
  for (int i=0; i<n; i++) {
    scores[i] = scores[i] / max_score * 100;
  }
  
  float avg = getSum(scores, n) / n;

  cout << avg << '\n';

  return 0;
}
