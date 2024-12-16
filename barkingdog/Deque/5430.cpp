// AC - 골드5
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int T;
  cin >> T;
  while (T--) {
    string p;
    int n;
    cin >> p >> n;

    deque<int> nums;
    string arr;
    cin >> arr;

    if (n > 0) {
      arr.pop_back();
      arr.erase(0, 1);

      string num;
      for (char c : arr) {
        if (isdigit(c) || c == '-') {
          num += c;
        }
        else if (c == ',') {
          if (!num.empty()) {
            nums.push_back(stoi(num));
            num.clear();
          }
        }
      }
      if (!num.empty()) {
        nums.push_back(stoi(num));
      }
    }
    bool isReversed = false;
    bool isError = false;

    for (char c : p) {
      if (c == 'R') {
        isReversed = !isReversed;
      }
      else if (c == 'D') {
        if (nums.empty()) {
          isError = true;
          break;
        }
        if (isReversed) {
          nums.pop_back();
        }
        else {
          nums.pop_front();
        }
      }
    }
    if (isError)
      cout << "error\n";
    else {
      cout << "[";
      if (isReversed) {
        if (!nums.empty()) {
          auto it = nums.rbegin();
          cout << *it++;
          while (it != nums.rend()) {
            cout << ',' << *it++;
          }
        }
      }
      else {
        if (!nums.empty()) {
          auto it = nums.begin();
          cout << *it++;
          while (it != nums.end()) {
            cout << ',' << *it++;
          }
        }
      }
      cout << "]\n";
    }
  }
}
