#include <iostream>
#include <queue>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n = 0;
  cin >> n; 
  queue<int> card;

  for (int i=1; i<=n; i++) {
    card.push(i);
    // cout << "card front: " << card.front() << '\n';
  }

  for (int i=0; i<n-1; i++) {
    card.pop();
    int front = card.front();
    card.pop();
    card.push(front);
  }

  cout << card.front() << '\n';

  return 0;
}
