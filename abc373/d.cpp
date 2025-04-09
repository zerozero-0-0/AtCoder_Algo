#include <bits/stdc++.h>
using namespace std;
// #include <atcoder/all>
// using namespace atcoder;

int main() {
  long long n, m;
  cin >> n >> m;
  vector<vector<pair<long long, long long>>> G(n);

  while (m--) {
    long long u, v;
    long long w;
    cin >> u >> v >> w;
    u--;
    v--;
    G[u].push_back({ v, w });
    G[v].push_back({ u, -w });
  }

  const long long inf = 1e18;
  vector<long long> dist(n, -inf);

  queue<long long> q;
  for (long long si = 0; si < n; si++) {
    if (dist[si] != -inf) continue;
    dist[si] = 0;
    q.push(si);
    while (!q.empty()) {
      long long u = q.front();
      q.pop();
      for (long long i = 0; i < G[u].size(); i++) {
        auto [v, d] = G[u][i];
        if (dist[v] != -inf) continue;
        dist[v] = dist[u] + d;
        q.push(v);
      }
    }
  }

  for (long long d : dist) cout << d << " ";
  cout << "\n";
}