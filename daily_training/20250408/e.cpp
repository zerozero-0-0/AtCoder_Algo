#include <bits/stdc++.h>
using namespace std;
// #include <atcoder/all>
// using namespace atcoder;

int main() {
    int n, d;
    long long p;
    cin >> n >> d >> p;
    vector<long long> f(n);
    for (auto &i : f) cin >> i;

    sort(f.begin(), f.end(), greater<int> ());
    vector<long long> sum;

    for (int i = 0; i < n; i += d) {
        long long s = 0;
        int j = 0;
        while(j < d && i + j < n) {
            s += f[i + j];
            j++;
        }
        sum.push_back(s);
    }

    long long ans = 0;
    for (auto i : sum) {
        if (i < p) ans += i;
        else ans += p;
    }

    cout << ans << "\n";
}