#include <iostream>
#include <vector>
using namespace std;

// 각 점수 = 원점수 / 최고점 * 100
// 점수가 A, B, C, 최고점이 M일 때 평균: (A+B+C) * 100 / 3M;
int main() {
  int n=0; 
  cin >> n;
  vector<double> scores(n, 0);
  for (int i=0; i<n; i++) {
    cin >> scores[i];
  }
  
  long max =0;
  long sum = 0;

  for (int i=0; i<n; i++) {
    if (scores[i] > max) {
      max = scores[i];
    }
    sum += scores[i]; // 하나의 for문 내에서 max, sum 계산 동시에
  }

  double avg = sum * 100.0 / n / max;

  cout << avg << '\n';

  return 0;
}
