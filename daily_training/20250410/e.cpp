#include <bits/stdc++.h>
using namespace std;
// #include <atcoder/all>
// using namespace atcoder;

int main() {
    int h, w, n;
    cin >> h >> w >> n;
    string t;
    cin >> t;
    vector<string> s(h);
    for (auto &i : s) cin >> i;

    map<char, pair<int, int>> mp;
    mp['L'] = {0, -1};
    mp['R'] = {0, 1};
    mp['U'] = {-1, 0};
    mp['D'] = {1, 0};

    set<pair<int, int>> st;

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (s[i][j] == '#') continue;
            int ci = i, cj = j;
            bool flg = true;
            for (char c : t) {
                auto[di, dj] = mp[c];
                int ni = ci + di, nj = cj + dj;
                if (ni < 0 || ni >= h || nj < 0 || nj >= w) {
                    flg = false;
                    continue;
                }
                if (s[ni][nj] == '#') {
                    flg = false;
                    continue;
                }
                ci = ni;
                cj = nj;
            }
            if(flg) st.insert({ci, cj});
        }
    }

    cout << st.size() << "\n";
}