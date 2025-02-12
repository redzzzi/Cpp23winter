#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int parent[100001];

int find_parent(int x);
void union_sets(int x, int y);

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int N, M;
  cin >> N >> M;

  for (int i=1; i<=N; i++) {
    parent[i] = i;
  }

  vector<pair<int, pair<int, int>>> edges; // (중량, (섬1, 섬2));
  
  int A, B, C;
  for (int i=0; i<M; i++) {
    cin >> A >> B >> C;
    edges.push_back({C, {A, B}});
  }

  sort(edges.rbegin(), edges.rend());

  int X, Y;
  cin >> X >> Y;

  int max_weight = 0;
  for (auto &edge: edges) {
    int weight = edge.first;
    int u = edge.second.first;
    int v = edge.second.second;

    union_sets(u, v);

    if (find_parent(X) == find_parent(Y)) {
      max_weight = weight;
      break;
    }
  }

  cout << max_weight << '\n';

  return 0;
}

int find_parent(int x) {
  if (parent[x] != x) {
    parent[x] = find_parent(parent[x]);
  }
  return parent[x];
}

void union_sets(int x, int y) {
  x = find_parent(x);
  y = find_parent(y);

  if (x != y) {
    parent[y] = x;
  }
}
