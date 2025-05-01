#include <functional>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> f(n), s(n);
    for (int i = 0; i < n; i++) cin >> f[i] >> s[i];

    vector<pair<int, int>> vec(n);
    for (int i = 0; i < n; i++) {
        vec[i] = {s[i], f[i]};
    }

    sort(vec.begin(), vec.end(), greater<pair<int, int>> ());

    long long m = vec[0].first;
    long long ans = 0;
    int flavor = vec[0].second;
    for (int i = 1; i < n; i++) {
        auto [l, r] = vec[i];
        if (r == flavor) ans = max(ans, (long long)l / 2);
        else ans = max(ans, (long long) l);
    }

    cout << (long long) m + ans << "\n";
}
