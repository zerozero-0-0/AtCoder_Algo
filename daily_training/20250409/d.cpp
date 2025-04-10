#include <bits/stdc++.h>
using namespace std;
// #include <atcoder/all>
// using namespace atcoder;

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for (int &i : s) cin >> i;

    set<long long> presentable_s;
    for (long long a = 1; a <= 1000; a++) {
        for (long long b = 1; b <= 1000; b++) {
            long long cs = 4 * a * b + 3 * a + 3 * b;
            presentable_s.insert(cs);
        }
    }

    int ans = 0;
    for (int i : s) {
        if(!presentable_s.count(i)) ans++ ;
    }

    cout << ans << "\n";
}