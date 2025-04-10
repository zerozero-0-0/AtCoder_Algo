#include <bits/stdc++.h>
using namespace std;
// #include <atcoder/all>
// using namespace atcoder;

int main() {
  int n = 26;
  vector<int> p(n);
  for (auto &i : p) cin >> i;

  map<int, char> mp;
  char c = 'a';
  for (int i = 1; i <= 26; i++) {
    mp[i] = c;
    c++;
  }

  for (int i : p) cout << mp[i];
  cout << "\n";
}