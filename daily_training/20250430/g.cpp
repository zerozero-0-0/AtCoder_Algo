#include <bits/stdc++.h>
#include <cctype>
using namespace std;
// #include <atcoder/all>
// using namespace atcoder;

int main() {
    long long x, y, z;
    string s;
    cin >> x >> y >> z >> s;

    vector<pair<char, int>> rle;
    for (int i = 0; i < s.size();) {
        char c = s[i];
        int cnt = 0;
        while (c == s[i]) {
            cnt++;
            i++;
        }
        rle.push_back({c, cnt});
    }

    long long ans = 0;
    bool isCapsLockOn = false;
    for (int _i = 0; _i < rle.size(); _i++) {
        auto [i, j] = rle[_i];
        if (_i == rle.size() - 1) {

        } else {
            if (isupper(i)) {
                // Shift only
                long long l =  y * j;
                // CapsLock -> On
                long long r;
                if (isCapsLockOn) r = x * j;
                else {
                    r = z + x * j;
                    isCapsLockOn = true;
                }
            } else {
                long long l = y * 
            }
        }
    }
}
