#include <bits/stdc++.h>
using namespace std;
// #include <atcoder/all>
// using namespace atcoder;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a) cin >> i;

    int ans = 0;
    for (int m = 1; m <= 1e6; m++) {
        int sum = 0;
        for (auto i : a) {
            sum += (m % i);
        }
        ans = max(ans, sum);
    }

    cout << ans << "\n";
}
