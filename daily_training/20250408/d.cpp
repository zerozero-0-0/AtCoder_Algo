#include <bits/stdc++.h>
using namespace std;
// #include <atcoder/all>
// using namespace atcoder;

int main() {
    int n;
    cin >> n;
    vector grid (n, vector<char> (n, '.'));

    for (int i = 0; i < n; i++) {
        int j = n - i;
        if (i <= j) {
            char c;
            if (i % 2 == 0) {
                c = '#';
            } else {
                c = '.';
            }
            for (int k = i; k < j; k++) {
                for (int l = i; l < j; l++) {
                    grid[k][l] = c;
                }
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) cout << grid[i][j];
        cout << "\n";
    }
}