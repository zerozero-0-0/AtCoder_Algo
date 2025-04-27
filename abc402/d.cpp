#include <bits/stdc++.h>
using namespace std;
// #include <atcoder/all>
// using namespace atcoder;

int main() {
    int n, m;
    cin >> n >> m;
    const long double PI = acos(-1);
    // 平行でなければ交わる
    vector <pair<long double, long double>> pos(n);
    long double theta = 2 * PI / n; 
    for (int i = 0; i < n; i++) {
        pos[i] = {cos(i * theta), sin(i * theta)};
    }

    vector<long double> a(m);
    set<long double> st;
    map<long double, int> mp;
    for (int i = 0; i < m; i++) {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        auto [x1, y1] = pos[l];
        auto [x2, y2] = pos[r];

        long double line = abs((y1 - y2) / (x1 - x2));
        st.insert(line);
        mp[line]++;
    }

    long long ans = 0;
    

    cout << ans << "\n";
}
