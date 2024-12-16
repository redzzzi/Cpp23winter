#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Graph {
private:
  int n;
  vector<vector<int>> adList;
  bool* visited;

  void DFSUtil(int v);
public:
  Graph(int n);
  ~Graph();
  void addEdge(int u, int v);
  void DFS();
};

Graph::Graph(int n) {
  this->n = n;
  adList.resize(n);
}

Graph::~Graph() {
}

void Graph::addEdge(int u, int v) {
  adList[u].push_back(v);
  // adList[v].push_back(u);
}

void Graph::DFSUtil(int v) {
  visited[v] = true;
  cout << v << " ";

  sort(adList[v].begin(), adList[v].end());

  for (int u: adList[v]) {
    if (!visited[u]) {
      DFSUtil(u);
    }
  }
}

void Graph::DFS() {
  visited = new bool[n];
  for (int i=0; i<n; i++) {
    visited[i] = false;
  }

  for (int i=0; i<n; i++) {
    if (!visited[i]) {
      DFSUtil(i);
    }
  }
  delete[] visited;
}

int main() {
  Graph g(8); // 정점 5개인 그래프 생성

  // 간선 추가
  g.addEdge(0, 1);
  g.addEdge(0, 2);
  g.addEdge(0, 3);
  g.addEdge(1, 4);
  g.addEdge(2, 3);
  g.addEdge(2, 5);
  g.addEdge(4, 5);
  g.addEdge(4, 7);
  g.addEdge(7, 6);
  g.addEdge(6, 2);

  cout << "DFS Traversal: ";
  g.DFS(); // DFS 실행
  cout << endl;
  
  return 0;
}
