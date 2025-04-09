#include <bits/stdc++.h>
using namespace std;
// #include <atcoder/all>
// using namespace atcoder;

int main() {
    int n, k;
    cin >> n >> k;
    vector<string> s(n);
    for (string &t : s) cin >> t;

    int ans = -1;
    for (int bit = 0; bit < (1 << n); bit++) {
        map<char, int> mp;
        for (int i = 0; i < n; i++) {
            if (bit & (1 << i)) {
                for (int j = 0; j < s[i].size(); j++) {
                    mp[s[i][j]]++;
                }
            }
        }
        int cur = 0;
        for (char c = 'a'; c <= 'z'; c++) {
            if (mp[c] == k) cur++;
        }

        ans = max(ans, cur);
    }

    cout << ans << "\n";
}