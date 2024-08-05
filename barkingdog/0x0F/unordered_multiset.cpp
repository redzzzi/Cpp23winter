#include <bits/stdc++.h>
using namespace std;

void unordered_multiset_example() {
  unordered_multiset<int> ms;
  ms.insert(-10); ms.insert(100); ms.insert(15); // {-10, 100, 15}
  ms.insert(-10); ms.insert(100); // {-10, -10, 100, 15, 15}
  cout << ms.size() << '\n'; // 5
  for (auto e : ms) cout << e << ' ';
  cout << '\n';
  cout << ms.erase(15) << '\n'; // {-10, -10, 100}, 2
  ms.erase(ms.find(-10)); // {-10, 100}
  ms.insert(100);
  cout << ms.count(100) << '\n'; // 2
}
