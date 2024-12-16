#include <bits/stdc++.h>
using namespace std;

int main() {
  int K, L;
  cin >> K >> L;
  unordered_map<string, int> lst;
  for (int i=0; i<L; i++) {
    string stu;
    cin >> stu;
    if (lst.find(stu) != lst.end()) {
      lst.erase(stu);
    }
    lst[stu] = i;
  }

  // cout << "========================\n";
  // for (auto e : lst) {
  //   cout << e.first << ' ' << e.second << '\n';
  // }
  // cout << "========================\n";

  vector<pair<string, int> > ordered(lst.begin(), lst.end());
  sort(ordered.begin(), ordered.end(), [](const pair<string, int>& a, const pair<string, int>& b) {
    return a.second < b.second;
  });

  // cout << "========================\n";
  // for (auto e : ordered) {
  //   cout << e.first << ' ' << e.second << '\n';
  // }
  // cout << "========================\n";
  
  int n = 0;
  for (auto e : ordered) {
    cout << e.first << '\n';
    n++;
    if (n == K) break;
  }
}
