// 스택 - 실버 4
#include <bits/stdc++.h>
using namespace std;

const int MX = 1000005;
int dat[MX];
int pos = 0;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int line;
  cin >> line;
  while (line--) {
    string command;
    cin >> command;
    if (command == "push") {
      int num;
      cin >> num;
      dat[pos++] = num;
    }
    else if (command == "pop") {
      if (pos > 0) {
        cout << dat[pos-1] << '\n';
        pos--;
      } else {
        cout << "-1" << '\n';
      }
    }
    else if (command == "size") {
      cout << pos << '\n';
    }
    else if (command == "empty") {
      if (pos > 0) {
        cout << '0' << '\n';
      } 
      else {
        cout << '1' << '\n';
      }
    }
    else { // top
      if (pos > 0) {
        cout << dat[pos-1] << '\n';
      }
      else {
        cout << "-1" << '\n';
      }
    }
  }
}
