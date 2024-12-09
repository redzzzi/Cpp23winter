#include <iostream>
using namespace std;

int board[502][502] =
{{1,1,1,0,1,0,0,0,0,0},
 {1,0,0,0,1,0,0,0,0,0},
 {1,1,1,0,1,0,0,0,0,0},
 {1,1,0,0,1,0,0,0,0,0},
 {0,1,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0} }; // 1이 파란 칸, 0이 빨간 칸에 대응

bool vis[502][502]; // 해당 칸을 방문했는지 여부를 저장
int n = 7, m = 10;  // n = 행의 수, m = 열의 수
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1}; // 상하좌우 네 방향을 의미

struct Stack {
    pair<int, int> data[502 * 502];
    int top = -1;

    void push(int x, int y) {
        data[++top] = {x, y};
    }

    pair<int, int> pop() {
        return data[top--];
    }

    bool empty() {
        return top == -1;
    }
};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    Stack S;
    vis[0][0] = 1;  // (0, 0)을 방문했다고 명시
    S.push(0, 0);   // 스택에 시작점인 (0, 0)을 삽입

    while (!S.empty()) {
        auto cur = S.pop();
        cout << '(' << cur.first << ", " << cur.second << ") -> ";
        for (int dir = 0; dir < 4; dir++) {  // 상하좌우 칸을 살펴볼 것이다
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];  // nx, ny에 dir에서 정한 방향의 인접한 칸의 좌표가 들어감
            if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue; // 범위 밖일 경우 넘어감
            if (vis[nx][ny] || board[nx][ny] != 1) continue;      // 이미 방문한 칸이거나 파란 칸이 아닐 경우
            vis[nx][ny] = 1;                                     // (nx, ny)를 방문했다고 명시
            S.push(nx, ny);
        }
    }

    return 0;
}

