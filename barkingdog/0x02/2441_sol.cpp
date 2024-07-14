// 별 찍기 - 4
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  cin >> N;

  for (int i = 0; i < N; i++) {
    int j = 0;
    for ( ; j < i; j++) cout << ' ';
    for ( ; j < N; j++) cout << '*';
    cout << '\n';
  }
}
