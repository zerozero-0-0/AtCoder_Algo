#include <bits/stdc++.h>
using namespace std;
// #include <atcoder/all>
// using namespace atcoder;

int main() {
    string t, u;
    cin >> t >> u;

    bool ok = false;

    for (int i = 0; i < t.size() - u.size() + 1; i++) {
        string s = t.substr(i, u.size());
        bool flg = true;
        for (int j = 0; j < u.size(); j++) {
            if (s[j] == '?') continue;
            if (s[j] != u[j]) {
                flg = false;
                break;
            }
        }

        ok = ok || flg;
    }

    if (ok) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    } 
}
