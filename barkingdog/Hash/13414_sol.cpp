#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int K, L;
  cin >> K >> L;
  unordered_map<string, int> signup{};
  for (int i=0; i<L; ++i) {
    string student_num;
    cin >> student_num;
    signup[student_num] = i;
  }
  vector<pair<string, int>> slist(signup.begin(), signup.end());
  sort(slist.begin(), slist.end(), [](auto& a, auto& b) { return a.second < b.second; });

  int en = min(K, (int)slist.size());

  for (int i=0; i<en; ++i)
    cout << slist[i].first << '\n';
}
