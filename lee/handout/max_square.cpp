// Assignment - 1: Find max square
#include <iostream>
using namespace std;

int N = 0, M = 0; // N은 매트릭스의 사이즈, M은 추가할 값
int main() {
  cin >> N >> M;
  int mat[N][N];
  for (int i=0; i<N; i++) {
    fill(mat[i], mat[i]+N, 0);
  }

  int x, y, val; 
  while (M--) {
    cin >> x >> y >> val;
    mat[x][y] = val;
  }
  int maxVal = 0, maxX, maxY;
  for (int i=1; i<N-1; i++) {
    for (int j=1; j<N-1; j++) {
      int neighbors = mat[i-1][j-1] + mat[i][j-1] + mat[i+1][j-1] + mat[i-1][j] + mat[i][j] + mat[i+1][j] + mat[i-1][j+1] + mat[i][j+1] + mat[i+1][j+1];
      if (neighbors >  maxVal) {
        maxVal = neighbors;
        maxX = i;
        maxY = j;
      }
    }
  }

  cout << maxX << ' ' << maxY << ' '  << maxVal;
  return 0;
}
