#include <bits/stdc++.h>
using namespace std;
// #include <atcoder/all>
// using namespace atcoder;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(n);
    for (auto &i : a) cin >> i;
    for (auto &i : b) cin >> i;
    
    vector<set<int>> vec(n);
    vec[0].insert(a[0]);
    vec[0].insert(b[0]);
    
    for (int i = 1; i < n; i++) {
        for (int j : vec[i - 1]) {
            if (abs(a[i] - j) <= k) vec[i].insert(a[i]);
            if (abs(b[i] - j) <= k) vec[i].insert(b[i]);
        }
    }

    if (vec[n - 1].size()) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}