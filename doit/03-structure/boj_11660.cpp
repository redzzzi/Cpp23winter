#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n = 0, q = 0;
  cin >> n >> q;
  vector<vector<int>> ori(n+1, vector<int>(n+1, 0));
  vector<vector<int>> sum(n+1, vector<int>(n+1, 0));

  for (int i=1; i<=n; i++) {
    for (int j=1; j<=n; j++) {
      cin >> ori[i][j];
      sum[i][j] = sum[i][j-1] - sum[i-1][j-1] + sum[i-1][j] + ori[i][j];
    }
  }

  for (int i=0; i<q; i++) {
    int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
    cin >> x1 >> y1 >> x2 >> y2;
    int result = sum[x2][y2] - sum[x1-1][y2] - sum[x2][y1-1] + sum[x1-1][y1-1];
    cout << result << '\n';
  }

  return 0;
}
