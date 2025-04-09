#include <bits/stdc++.h>
using namespace std;
// #include <atcoder/all>
// using namespace atcoder;

unsigned long long cir (long long a, long long b) {
    unsigned long long s = a * a * a + a * a * b + a * b * b + b * b * b;
    return s;
}

int main() {
    unsigned long long n;
    cin >> n;

    unsigned long long b = pow(n, 1 / 3);
    unsigned long long x = 1e19;
    if (n == 0) {
        cout << 0 << "\n";
        return 0;
    }
    for (unsigned long long a = 0; a * a * a <= n; a++) {
        while(cir(a, b) < n) b++;
        while(cir(a, b - 1) >= n) b--;
        x = min(x, cir(a, b));
    }

    cout << x << "\n";
}