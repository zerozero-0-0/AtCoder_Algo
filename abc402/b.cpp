#include <bits/stdc++.h>
using namespace std;
// #include <atcoder/all>
// using namespace atcoder;

int main() {
    int q;
    cin >> q;

    queue<int> qu;
    while(q--) {
        int n;
        cin >> n;
        if (n == 1) {
            int x;
            cin >> x;
            qu.push(x);
        } else {
            int o = qu.front();
            qu.pop();
            cout << o << "\n";
        }
    }
}
