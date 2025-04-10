#include <bits/stdc++.h>
using namespace std;
// #include <atcoder/all>
// using namespace atcoder;

int main() {
    int n;
    string s;
    cin >> n >> s;
    vector <int> w(n);
    for (int &i : w) cin >> i;

    vector<int> bottom, up;
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            bottom.push_back(w[i]);
        } else {
            up.push_back(w[i]);
        }
    }

    sort(bottom.begin(), bottom.end());
    sort(up.begin(), up.end());
    
    int n = bottom.size(), m = up.size();
    for (int i = 0;)
}