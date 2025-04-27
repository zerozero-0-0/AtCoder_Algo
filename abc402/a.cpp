#include <bits/stdc++.h>
using namespace std;
// #include <atcoder/all>
// using namespace atcoder;

int main() {
    string s;
    cin >> s;

    for (auto c : s) {
        if (isupper(c)) cout << c;
    }

    cout << "\n";
}
