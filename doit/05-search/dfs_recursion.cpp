// DFS - recursion
#include <iostream>
#include <cstring>
using namespace std;

#define MAX_N 10
int N, E;
int Graph[MAX_N][MAX_N];
bool Visited[MAX_N];
void dfs(int node);

int main() {
  cin >> N >> E;
  memset(Graph, 0, sizeof(Graph));
  memset(Visited, 0, sizeof(Visited));

  for (int i=0; i<E; i++) {
    int u, v;
    cin >> u >> v;
    Graph[u][v] = Graph[v][u] = 1;
  }

  dfs(0);

  return 0;
}

void dfs(int node) {
  Visited[node] = true;
  cout << node << ' ';

  for (int next=0; next<N; next++) {
    if (!Visited[next] && Graph[node][next]) { // 다음 노드가 비어있지 않고, 해당 그래프가 이어져있다면
      dfs(next);
    }
  }
}
