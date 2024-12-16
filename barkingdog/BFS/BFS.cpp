#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second // pair STL에서 first, second를 줄여쓰기 위해 정의한다.
int board[502][502] = {
  {1,1,1,0,1,0,0,0,0,0},
  {1,0,0,0,1,0,0,0,0,0},
  {1,1,1,0,1,0,0,0,0,0},
  {1,1,0,0,1,0,0,0,0,0},
  {0,1,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0}
}; // 1 - 파란 칸, 0 - 빨간 칸
bool vis[502][502]; // 해당 칸을 방문했는지의 여부를 저장한다.
int n = 7, m = 10; // n - 행의 수, m - 열의 수
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1}; // 상하좌우 네 방향을 의미한다.

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  queue<pair<int, int> > Q;
  vis[0][0] = 1; // (0,0)을 방문했다고 명시한다.
  Q.push({0, 0}); // 시작점인 (0, 0)을 큐에 삽입한다.
  while (!Q.empty()) {
    pair<int, int> cur = Q.front(); Q.pop();
    cout << '(' << cur.X << ", " << cur.Y << ") -> ";
    for (int dir = 0; dir < 4; dir++) { // 상하좌우를 살펴본다.
      int nx = cur.X + dx[dir];
      int ny = cur.Y + dy[dir]; // nx, ny에 dir에서 정한 방향의 인접한 칸 좌표가 들어간다.
      if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue; // 범위 밖일 경우 넘어간다.
      if (vis[nx][ny] || board[nx][ny] != 1) continue; // 이미 방문한 칸이거나 파란 칸이 아닐 경우 넘어간다.
      vis[nx][ny] = 1; // (nx, ny)를 방문했다고 명시한다.
      Q.push({nx, ny});
    }
  }
}
