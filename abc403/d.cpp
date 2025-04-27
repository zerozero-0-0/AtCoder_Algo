#include <bits/stdc++.h>
using namespace std;
// #include <atcoder/all>
// using namespace atcoder;

int main() {
    int n, d;
    cin >> n >> d;
    vector<int> a(n);
    for (auto &i : a) cin >> i;

    set<int> st;
    set<int, greater<int>> ast;
    map<int, int> mp;

    for (auto i : a) {
        st.insert(i);
        ast.insert(i);
        mp[i]++;
    }


    int ans = 0;

    auto descendingSolve = [&] (set<int> st) {
        int sum = 0;
        for (int i : st) {
            int j = i + d;
            int k = i - d;
            int cnt = mp[j] + mp[k];
            if (cnt >= mp[i]) {
                sum += mp[i];
                mp[i] = 0;
            }
        }

        return sum;
    };

    ans = descendingSolve(st);

    auto anscendingSolve = [&] (set<int, greater<int>> ast) {
        int sum = 0;
        for (int i : ast) {
            int j = i + d;
            int k = i - d;
            int cnt = mp[j] + mp[k];
            if (cnt <= mp[i]) {
                sum += mp[i];
                mp[i] = 0;
            }
        }
        return sum;
    };

    ans = min(ans, anscendingSolve(ast));

    cout << ans << "\n";
}
