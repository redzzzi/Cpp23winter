// 방 배정 - 브론즈2
#include <bits/stdc++.h>
using namespace std;

int N, K;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> N >> K; // N : 학생 수, K : 한 방에 배정할 수 있는 최대 인원 수
  int S, Y, room = 0; // S : 학생의 성별, Y : 학년
                      // S -> 0이면 여자, 1이면 남자
  int space[2][6] = {0};
  while (N--) {
    cin >> S >> Y;
    Y--;
    if (!space[S][Y]) room++;
    space[S][Y]++;
    if (space[S][Y] == K) {
      space[S][Y] = 0;
      continue;
    }
  }
  cout << room << '\n';
}
