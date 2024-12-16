// 토마토 - 골드5
#include <bits/stdc++.h>
using namespace std;

int board[1002][1002];
int dist[1002][1002];
int N, M;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cin >> N >> M;
  queue<pair<int, int> > Q;
  for (int i=0; i<N; i++) {
    for (int j=0; j<M; j++) {
      cin >> board[i][j];
      if (board[i][j] == 1)
        Q.push({i, j});
      if (board[i][j] == 0)
        dist[i][j] = -1;
    }
  }
  while (!Q.empty()) {
    pair<int, int> cur = Q.front();
    Q.pop();
    for (int dir=0; dir<4; dir++) {
      int nx = cur.first + dx[dir];
      int ny = cur.second + dy[dir];
      if (nx < 0 ||  nx >= N || ny < 0 || ny >= M) continue;
      if (dist[nx][ny] >= 0) continue;
      dist[nx][ny] = dist[cur.first][cur.second] + 1;
      Q.push({nx, ny});
    }
  }
  int ans = 0;
  for (int i=0; i<N; i++) {
    for (int j=0; j<M; j++) {
      if (dist[i][j] == -1) {
        cout << -1;
        return 0;
      }
      ans = max(ans, dist[i][j]);
    }
  }
  cout << ans;
}
