#include <bits/stdc++.h>
using namespace std;

void unordered_set_example() {
  unordered_set<int> s;
  s.insert(-10); s.insert(100); s.insert(15); // {-10, 100, 15}
  s.insert(-10); // {-10, 100, 15}
  cout << s.erase(100) << '\n'; // {-10, 15}, 1
  cout << s.erase(20) << '\n'; // {-10, 15}, 0
  if (s.find(15) != s.end()) cout << "15 in s\n";
  else cout << "15 not in s\n";
  cout << s.size() << '\n'; //2
  cout << s.count(50) << '\n'; // 0
  for (auto e : s) cout << e << ' ';
  cout << '\n';
}
