#include <bits/stdc++.h>
using namespace std;
// #include <atcoder/all>
// using namespace atcoder;

int main() {
    int n, k;
    cin >> n >> k;

    const long long mod = 1e9;
    vector<long long> a(n + 1);

    long long sum = 0;
    for (int i = 0; i <= n; i++) {
        if (i < k) a[i] = 1;
        else {
            a[i] = sum;
            sum -= a[i - k];
        }

        sum += a[i];
        sum = (sum + mod) % mod;
    }

    // for (int i = 0; i <= n; i++) {
    //     printf("%d : %lld\n", i, a[i]);
    // }
    cout << a[n] << "\n";
}