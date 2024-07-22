#include <bits/stdc++.h>
using namespace std;

int main() {
  deque<int> Deque;
  Deque.push_front(10); // 10
  Deque.push_back(50); // 10 50
  Deque.push_front(24); // 24 10 50

  for (auto x : Deque) cout << x;
  cout << Deque.size() << '\n'; // 3

  if (Deque.empty()) cout << "Deque is empty\n";
  else cout << "Deque is not empty\n"; // Deque is not empty
 
  Deque.pop_front(); // 10 50
  Deque.pop_back(); // 10

  cout << Deque.back() << '\n'; // 10
  Deque.push_back(72); // 10 72
  cout << Deque.front() << '\n'; // 10
  Deque.push_back(12); // 10 72 12
  Deque[2] = 17; // 10 72 17
  
  Deque.insert(Deque.begin() + 1, 33); // 10 33 72 17
  Deque.insert(Deque.begin() + 4, 60); // 10 33 72 17 60
  for (auto x : Deque) cout << x << ' ';
  cout << '\n';
  Deque.erase(Deque.begin() + 3); // 10 33 72 60 
  cout << Deque[3] << '\n'; // 60
  Deque.clear(); // 덱의 모든 원소를 제거한다.
}
