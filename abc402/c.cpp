#include <bits/stdc++.h>
using namespace std;
// #include <atcoder/all>
// using namespace atcoder;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> k(m);
    vector<vector<int>> a(m);

    for (int i = 0; i < m; i++) {
        cin >> k[i];
        a[i].resize(k[i]);
        for (int j = 0; j < k[i]; j++) {
            cin >> a[i][j];
        }
    }

    vector<int> b(n);
    for (auto &i : b) cin >> i;



    map<int, int> B;
    set<int> st;
    for (int i = 0; i < n; i++) {
        B[b[i]] = i;
        st.insert(b[i]);
    }

    vector<int> isEatble(m, -1);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < k[i]; j++) {
            if (!st.count(a[i][j])) isEatble[i] = 1e9; 
            else isEatble[i] = max(isEatble[i], B[a[i][j]]);
        }
        if (isEatble[i] == -1) isEatble[i] = 1e9;
    }

    sort(isEatble.begin(), isEatble.end());
    //　最後に食べられるようになる日が分かった

    int r = 0;
    for (int i = 0; i < n; i++) {
        while (r < m && i >= isEatble[r]) r++;
        cout << r << "\n";
    }
}
