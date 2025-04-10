#include <bits/stdc++.h>
using namespace std;
// #include <atcoder/all>
// using namespace atcoder;

int main() {
    vector <int> a;
    while (true) {
        int b;
        cin >> b;
        a.push_back(b);
        if (b == 0) break;
    }
    reverse(a.begin(), a.end());
    for (int i : a) cout << i << "\n";
}