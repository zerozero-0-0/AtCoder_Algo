#include <bits/stdc++.h>
using namespace std;
// #include <atcoder/all>
// using namespace atcoder;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a) cin >> i;

    vector<bool> isCalled(n, false);
    for (int i = 0; i < n; i++) {
        if (!isCalled[i]) {
            isCalled[a[i] - 1] = true;
        }
    }

    int num = 0;
    for (int i = 0; i < n; i++) {
        if (!isCalled[i]) num++;
    }
    cout << num << endl;
    for (int i = 0; i < n; i++) {
        if (!isCalled[i]) cout << i + 1 << " ";
    }
    cout << endl;
}