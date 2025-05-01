#include <bits/stdc++.h>
using namespace std;
// #include <atcoder/all>
// using namespace atcoder;

int main() {
    string s;
    cin >> s;

    vector <string> vec;
    int n = s.size();
    int idx = 0;
    while(idx < n) {
        string t = s.substr(idx, n);
        vec.push_back(t);
        char c = s[idx];
        s.push_back(c); 
        idx++;
    }

    sort(vec.begin(), vec.end());
    cout << vec[0] << "\n";
    cout << vec[vec.size() - 1] << "\n";
}
