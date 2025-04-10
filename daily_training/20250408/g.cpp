#include <bits/stdc++.h>
using namespace std;
// #include <atcoder/all>
// using namespace atcoder;

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    for (auto &i : s) cin >> i;

    vector dp(h, vector<bool> (w, false));
    if (s[0][0] == 's') dp[0][0] = true;

    auto previous_char =[&](char c) {
        switch (c)
        {
        case 's': return 'e';
        case 'n': return 's';
        case 'u': return 'n';
        case 'k': return 'u';
        case 'e': return 'k';
        default: return 'z';
        }
    };

    const int di[] = {1, 0, -1, 0}, dj[] = {0, 1, 0, -1};

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (i == 0 && j == 0) continue;
            char pc = previous_char(s[i][j]);
            if (pc == 'z') continue;
            for (int u = 0; u < 4; u++) {
                if (dp[i][j]) continue;
                int ni = i + di[u], nj = j + dj[u];
                if (ni < 0 || ni >= h || nj < 0 || nj >= w) continue;
                if (s[ni][nj] == pc) dp[i][j] = true;
            }
        }
    }

    if (dp[h - 1][w - 1]) cout << "Yes" << endl;
    else cout << "No" << endl;
}