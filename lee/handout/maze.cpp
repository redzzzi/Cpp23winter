// Assignment - 2: Maze
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int mat[n][n];
    bool visited[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
            visited[i][j] = false;
        }
    }
    int x = 0, y = 0;
    stack<pair<int, int>> order;
    order.push({x, y});
    visited[x][y] = true;
    bool found = false;
    while (!order.empty()) {
        x = order.top().first;
        y = order.top().second;
        if (x == n -1 && y == n -1) {
            found = true;
            break;
        }
        bool moved = false;

        if (mat[x][y] & 8 && x + 1 < n && !visited[x+1][y]) { // 아래쪽 이동
            x++;
            visited[x][y] = true;
            order.push({x, y});
            moved = true;
        }
        else if (mat[x][y] & 1 && y + 1 < n && !visited[x][y+1]) { // 오른쪽 이동
            y++;
            visited[x][y] = true;
            order.push({x, y});
            moved = true;
        }
        else if (mat[x][y] & 4 && y -1 >= 0 && !visited[x][y-1]) { // 왼쪽 이동
            y--;
            visited[x][y] = true;
            order.push({x, y});
            moved = true;
        }
        else if (mat[x][y] & 2 && x -1 >= 0 && !visited[x-1][y]) { // 위쪽 이동
            x--;
            visited[x][y] = true;
            order.push({x, y});
            moved = true;
        }
        else {
            order.pop(); // 갈 수 있는 방향이 없는 경우 되돌아가기
        }
    }
    if (found) {
        vector<pair<int, int>> path;
        while (!order.empty()) {
            path.push_back({order.top().first + 1, order.top().second + 1});
            order.pop();
        }
        reverse(path.begin(), path.end());
        cout << path.size() << '\n';
        for (auto& p : path) {
            cout << p.first << ' ' << p.second << '\n';
        }
    }
    else {
        cout << "예외상황\n";
    }
    return 0;
}

//     2
//     |
// 4 - ㅁ - 1
//     |
//     8
