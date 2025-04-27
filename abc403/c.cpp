#include <bits/stdc++.h>
using namespace std;
// #include <atcoder/all>
// using namespace atcoder;

int main() {
    int n, m, q;
    cin >> n >> m >> q;

    set<int> isCompletelyAuthorized;
    map<int, set<int>> isPartiallyAuthorized;

    while(q--) {
        int num;
        cin >> num;
        if (num == 1) {
            int x, y;
            cin >> x >> y;
            x--;
            y--;
            isPartiallyAuthorized[x].insert(y);
            if (isPartiallyAuthorized[x].size() == m) isCompletelyAuthorized.insert(x);
        } else if (num == 2) {
            int x;
            cin >> x;
            x--;
            isCompletelyAuthorized.insert(x);
        } else {
            int x, y;
            cin >> x >> y;
            x--;
            y--;
            if(isCompletelyAuthorized.count(x)) cout << "Yes\n";
            else if (isPartiallyAuthorized[x].count(y)) cout << "Yes\n";
            else cout << "No\n";
        }
    }
}
