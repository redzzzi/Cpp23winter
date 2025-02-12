#include <iostream>
#include <cstring>
#include <stack>
using namespace std;

#define MAX_N 10
int N, E;
int Graph[MAX_N][MAX_N];
void dfs(int node);

int main() {
  cin >> N >> E;
  memset(Graph, 0, sizeof(Graph));

  for (int i=0; i<E; i++) {
    int u, v;
    cin >> u >> v;
    Graph[u][v] = Graph[v][u] = 1;
  }

  dfs(0);

  return 0;
}

void dfs(int node) {
  bool visited[MAX_N] = {0};

  stack<int> myStack;
  myStack.push(node);

  while (!myStack.empty()) {
    int cur = myStack.top();
    myStack.pop();

    if (visited[cur]) continue;

    visited[cur] = 1;
    cout << cur << ' ';

    for (int next=0; next<N; next++) {
      if (!visited[next] && Graph[cur][next]) {
        myStack.push(next);
      }
    }
  }
}
