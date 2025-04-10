#include <bits/stdc++.h>
using namespace std;
// #include <atcoder/all>
// using namespace atcoder;

int main() {
    int n;
    cin >> n;
    vector<int> a(n), c(n);
    for (int i = 0; i < n; i++) cin >> a[i] >> c[i];

    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        if (mp[c[i]] == 0) mp[c[i]] = a[i];
        else mp[c[i]] = min(mp[c[i]], a[i]);
    }

    int ans = 0;
    for (int i : c) {
        ans = max(ans, mp[i]);
    } 

    cout << ans << "\n";
}