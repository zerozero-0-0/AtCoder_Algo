#include <bits/stdc++.h>
using namespace std;
// #include <atcoder/all>
// using namespace atcoder;

int main() {
    int n;
    cin >> n;
    vector <int> x(5 * n);
    for (auto &i : x) cin >> i;

    sort(x.begin(), x.end());

    int sum = 0;
    for (int i = n; i < 4 * n; i++) {
        sum += x[i];
    }

    double ans = (double) sum / (3 * n);
    cout << ans << "\n";
}
