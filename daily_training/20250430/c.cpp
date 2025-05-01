#include <bits/stdc++.h>
using namespace std;
// #include <atcoder/all>
// using namespace atcoder;

int main() {
    long long a, b, k;
    cin >> a >> b >> k;

    int ans = 0;
    while(a < b) {
        ans++;
        a *= k;
    }

    cout << ans << "\n";
}
