// 별 찍기-4 - 브론즈3
#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int star;
  cin >> star;
  
  for (int i=0; i<star; i++) {
    int j;
    for (j=0; j<i; j++) {
      cout << ' ';
    }
    for (int k=j; j<star; j++) {
      cout << '*';
    }
    cout << '\n';
  }
  return 0;
}
