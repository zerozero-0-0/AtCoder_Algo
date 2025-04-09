#include <bits/stdc++.h>
using namespace std;
#include <atcoder/dsu>
using namespace atcoder;

int main() {
    long long n, m;
    cin >> n >> m;
    vector<vector<pair<long long, long long>>> G(n);
    set<int> st;
    while (m--) {
        long long u, v, w;
        cin >> u >> v >> w;
        u--;
        v--;
        G[u].push_back({v, w});
        d.merge(u, v);
    }

    const long long inf = 1e18;
    vector<long long> dist(n, -inf);
    queue<long long> q;
    for (long long i = 0; i < n; i++) {
        int origin = d.leader(i);
        dist[origin] = 0;
        q.push(origin);
    }

    while(!q.empty()) {
        long long u = q.front();
        q.pop();
        for (long long i = 0; i < G[u].size(); i++) {
            auto [v, d] = G[u][i];
            if (dist[v] != -inf) continue;
            dist[v] = dist[u] + d;
            q.push(v);
        }
    }

    for (long long i = 0; i < n; i++) {
        printf("%lld ", dist[i]);
    }
    cout << "\n";   
}