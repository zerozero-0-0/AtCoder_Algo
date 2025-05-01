#include <bits/stdc++.h>
using namespace std;
// #include <atcoder/all>
// using namespace atcoder;

int main() {
    int n;
    cin >> n;
    vector <int> p(n);
    for (auto &i : p) cin >> i;
    int q;
    cin >> q;
    while(q--) {
        int a, b;
        cin >> a >> b;
        for (auto i : p) {
            if (i == a || i == b) {
                cout << i << "\n";
                break;
            }
        }
    }
}
