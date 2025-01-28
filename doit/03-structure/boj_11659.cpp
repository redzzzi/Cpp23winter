#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int daNo = 0, quizNo = 0;
  cin >> daNo >> quizNo;

  int S[100001] = {};

  for (int i=1; i<=daNo; i++) {
    int tmp = 0;
    cin >> tmp;
    S[i] = S[i-1] + tmp;
  }

  for (int i=0; i<quizNo; i++) {
    int start = 0, end = 0;
    cin >> start >> end;
    cout << S[end] - S[start-1] << '\n';
  }

  // cout << "S[0] is " << S[0] << '\n';

  return 0;
}
