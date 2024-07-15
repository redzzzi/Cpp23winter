// 핸드폰 요금 - 브론즈3
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  cin >> N;
  vector<int> min(N, 0);
  int Y = 0, M = 0;
  for (int i=0; i<N; i++) cin >> min[i];
  
  for (int i: min) {
    Y +=  (i / 30 + 1) * 10;
  }
  for (int i: min) {
    M +=  (i / 60 + 1) * 15;
  }

  if (Y < M) cout << "Y " << Y;
  else if (Y > M) cout << "M " << M;
  else cout << "Y M " << Y;

  return 0;
}
