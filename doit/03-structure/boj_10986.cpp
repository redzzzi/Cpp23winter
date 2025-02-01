#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n = 0, m = 0;
  cin >> n >> m;
  vector<long> sum(n+1, 0);
  vector<long> rem(m, 0);
  long rem_zero = 0;
  long remainder;
  long combination = 0;

  for (int i=1; i<=n; i++) {
    int tmp;
    cin >> tmp;
    sum[i] = sum[i-1] + tmp;
    remainder = sum[i] % m;
    if (remainder == 0) rem_zero++;
    rem[remainder]++;
  }

  for (long c: rem) {
    if (c >= 1) {
      combination += c * (c-1) / 2;
    }
  }

  long result = rem_zero + combination;
  cout << result << '\n';

  return 0;
}
