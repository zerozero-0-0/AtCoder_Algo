#include <bits/stdc++.h>
using namespace std;
// #include <atcoder/all>
// using namespace atcoder;

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> c(n), d(m);
    vector<int> p(m + 1);
    for (auto &i : c) cin >> i;
    for (auto &i : d) cin >> i;
    for (int &i : p) cin >> i;

    long long ans = 0;
    for (int i = 0; i < n; i++) {
        bool isDetected = false;
        for (int j = 1; j <= m; j++) {
            if (c[i] == d[j - 1]) {
                isDetected = true;
                ans += p[j];
            }
            if (!isDetected) ans += p[0];
        }
    }

    cout << ans <<"\n";
    return 0;
}