// 탑 - 골드5
#include <bits/stdc++.h>
using namespace std;

int N;
int main() {
  cin >> N;
  int max = 0;
  int index;
  stack<int> S;
  for (int i=1; i<=N; i++) {
    int t;
    cin >> t;
    if (S.empty()) {
      max = t;
      cout << "0 ";
    }
    else {
      if (t > S.top()) {
        if (t > max) {
          max = t;
          index = i;
          cout << "0 ";
        }
        else {
          cout << index << ' ';
        }
      }
      else {
        cout << i-1 << ' ';
      }
    }
    S.push(t);
  } 
  cout << '\n';
}
