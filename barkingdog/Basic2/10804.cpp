// 카드 역배치 - 브론즈2
#include <bits/stdc++.h>
using namespace std;

vector<int> card;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  for (int i=1; i<=20; i++) card.push_back(i);

  int a, b;
  for (int i=0; i<10; i++) {
    cin >> a >> b;
    reverse(card.begin()+a-1, card.begin()+b);
    // for (int i: card) cout << i << ' ';
    // cout << '\n';
  } 

  for (int i: card) cout << i << ' ';
  return 0;
}
