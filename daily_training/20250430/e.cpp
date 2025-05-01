#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
// #include <atcoder/all>
// using namespace atcoder;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    for (auto &i : a) cin >> i;

    for (int i = 1; i <= n; i++) {
        int r = lower_bound(a.begin(), a.end(), i) - a.begin();
        int ans = a[r] - i;
        cout << ans << "\n";
    }
}
