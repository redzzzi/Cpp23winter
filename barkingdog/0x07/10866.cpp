// 덱 - 실버4
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int num;
  cin >> num;
  deque<int> deq;
  while (num--) {
    string op;
    cin >> op;
    if (op == "push_back") {
      int ins_num;
      cin >> ins_num;
      deq.push_back(ins_num);
    }
    else if (op == "push_front") {
      int ins_num;
      cin >> ins_num;
      deq.push_front(ins_num);
    }
    else if (op == "pop_front") {
      if (deq.empty()) cout << "-1" << '\n';
      else {
        cout << deq.front() << '\n';
        deq.pop_front();
      }
    }
    else if (op == "pop_back"){
      if (deq.empty()) cout << "-1" << '\n';
      else {
        cout << deq.back() << '\n';
        deq.pop_back();
      }
    }
    else if (op == "size") {
      cout << deq.size() << '\n'; 
    }
    else if (op == "empty") {
      if (deq.empty()) cout << "1" << '\n';
      else cout << "0" << '\n';
    }
    else if (op == "front") {
      if (deq.empty()) cout << "-1" << '\n';
      else cout << deq.front() << '\n';
    }
    else { // back
      if (deq.empty()) cout << "-1" << '\n';
      else cout << deq.back() << '\n';
    }
  }
}
