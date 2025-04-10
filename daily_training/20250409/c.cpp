#include <bits/stdc++.h>
using namespace std;
// #include <atcoder/all>
// using namespace atcoder;

int main() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (long long &i : a) cin >> i;

    for (int i = 0; i < n - 1; i++) {
        if (a[i] * a[1] != a[i + 1] * a[0]) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}