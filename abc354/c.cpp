#include <bits/stdc++.h>
using namespace std;
// #include <atcoder/all>
// using namespace atcoder;

int main() {
    int n;
    cin >> n;
    vector<int> a(n), c(n);
    for (int i = 0; i < n; i++) cin >> a[i] >> c[i];

    vector<pair<int, int>> vec(n);
    for (int i = 0; i < n; i++) {
        vec[i] = {a[i], c[i]};
    }

    sort(vec.begin(), vec.end(), greater<pair<int, int>> ());
    vector<int>

    set<int> ans;
    for (int i = 0; i < n - 1; i++) {

    }
}
