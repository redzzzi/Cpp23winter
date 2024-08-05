// 불! - 골드3
#include <bits/stdc++.h>
using namespace std;

string board[1002];
int distF[1002][1002];
int distJ[1002][1002];
int N, M;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cin >> N >> M;
  for (int i=0; i<N; i++) {
    fill(distF[i], distF[i]+M, -1);
    fill(distJ[i], distJ[i]+M, -1);
  }
  for (int i=0; i<N; i++) {
    cin >> board[i];
  }
  queue<pair<int, int> > Q1;
  queue<pair<int, int> > Q2;

  for (int i=0; i<N; i++) {
    for (int j=0; j<M; j++) {
      if (board[i][j] == 'F') {
        Q1.push({i, j});
        distF[i][j] = 0;
      }
      if (board[i][j] == 'J') {
        Q2.push({i, j});
        distJ[i][j] = 0;
      }
    }
  }
  while (!Q2.empty()) {
    pair<int, int> cur = Q2.front();
    Q2.pop();
    for (int dir=0; dir<4; dir++) {
      int nx = cur.first + dx[dir];
      int ny = cur.second + dy[dir];
      if (nx < 0 || nx >= N || ny < 0 || ny >= M) {
        cout << distJ[cur.first][cur.second]+1;
        return 0;
      }
      if (distJ[nx][ny] >= 0 || board[nx][ny] == '#') continue;
      if (distF[nx][ny] != -1 && distF[nx][ny] <= distJ[cur.first][cur.second]+1) continue;
      distJ[nx][ny] = distJ[cur.first][cur.second] + 1;
      Q2.push({nx, ny});
    }
  }
  cout << "IMPOSSIBLE";
}
