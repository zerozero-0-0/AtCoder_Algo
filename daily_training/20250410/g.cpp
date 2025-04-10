
#include <bits/stdc++.h>
using namespace std;
// #include <atcoder/all>
// using namespace atcoder;

int main() {
    int n;
    long long l, r;
    cin >> n >> l >> r;
    vector <long long> p(n);
    for (auto &i : p) cin >> i;

    vector <long long> diff(n, 0);
    for (int i = 0; i < n; i++) {
        diff[i] = p[i] - l;
    }

    for (int i = 1; i < n; i++) diff[i] += diff[i - 1];

    int idx = 0;
    long long norm = -1e18;
    for (int i = 0; i < n; i++) {
        if (diff[i] >= norm) {
            idx = i;
            norm = diff[i];
        } 
    }

    for (int i = 0; i <= idx; i++) {
        p[i] = l;
    }

    for (int i = 0; i < n; i++) {
        diff[i] = p[i] - r;
    }

    for (int i = n - 1; i >= 1; i--) diff[i - 1] += diff[i];

    idx = n - 1;
    norm = -1e18;
    for (int i = n - 1; i >= 0; i--) {
        if (diff[i] >= norm) {
            idx = i;
            norm = diff[i];
        }
    }

    for (int i = n - 1; i >= 0; i--) p[i] = r;

    long long ans = 0;

    for (auto i : p) cout << i << " ";
    cout << endl;
    for (auto i : p) ans += i;
    cout << ans << "\n";
}