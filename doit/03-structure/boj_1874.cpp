#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n = 0;
  cin >> n;
  
  vector<int> A(n, 0);
  vector<char> result;

  for (int i=0; i<n; i++) {
    cin >> A[i];
  }

  stack<int> myStack;
  int number = 1;

  bool success = true;
  for (int i=0; i<n; i++) {
    int su = A[i]; // 얻고자 하는 값
    // myStack.push(su);
    if (su >= number) {
      while (su >= number) {
        // cout << "myStack.push(" << number << ')' << '\n';
        myStack.push(number++);
        result.push_back('+');
      }
      myStack.pop(); // number--는 존재하지 않음
      result.push_back('-');
    } else { // su < number
      int top = myStack.top();
      myStack.pop();

      if (top > su) {
        cout << "NO";
        success = false;
        break;
      } else {
        result.push_back('-');
      }
    }
  } 

  if (success) {
    for (auto c: result) {
      cout << c << '\n';
    }
  }

  return 0;
}
