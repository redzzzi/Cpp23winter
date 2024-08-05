// 미로 탐색 - 실버1
#include <bits/stdc++.h>
using namespace std;

int N, M;
int board[102][102];
int dist[102][102];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cin >> N >> M;
  for (int i=0; i<N; i++) {
    string row;
    cin >> row;
    for (int j=0; j<M; j++) {
      board[i][j] = row[j] - '0';
    }
  }
  for (int i=0; i<N; i++)
    fill(dist[i], dist[i]+M, -1);
  queue<pair<int, int> > Q;
  dist[0][0] = 0;
  Q.push({0, 0});
  while (!Q.empty()) {
    pair<int, int> cur = Q.front();
    Q.pop();
    for (int dir=0; dir<4; dir++) {
      int nx = cur.first + dx[dir];
      int ny = cur.second + dy[dir];
      if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
      if (dist[nx][ny] >= 0 || board[nx][ny] != 1) continue;
      dist[nx][ny] = dist[cur.first][cur.second]+1;
      Q.push({nx, ny});
    }
  }
  cout << dist[N-1][M-1]+1;
}
