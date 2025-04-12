#include <bits/stdc++.h>
using namespace std;
// #include <atcoder/all>
// using namespace atcoder;

int main() {
    int n, k;
    string s;
    cin >> n >> k >> s;

    vector<char> t(n, '?');

    int o_cnt = 0;
    for (char c : s) if (c == 'o') o_cnt++;

    set<int> l_isPuttable;

    for (int i = 0; i < s.size(); i++) {
      if (s[i] != '?') t[i] = s[i];
      else {
        if (i == 0) {
            if (s[i + 1] == 'o') {
                t[i] = '.';
            } else {
                l_isPuttable.insert(i);
            }
        } else if (i == s.size() - 1) {
            if (s[i - 1] == 'o' || t[i - 1] == 'o') {
                t[i] = '.';
            } else {
                l_isPuttable.insert(i);
            }
        } else {
            if (s[i - 1] == 'o' || t[i - 1] == 'o' || s[i + 1] == 'o') {
                t[i] = '.';
            } else {
                l_isPuttable.insert(i);
            }
        }
      }
    }

    set<int> r_isPuttable;

    for (int i = s.size() - 1; i >= 0; i--) {
      if (s[i] != '?') t[i] = s[i];
      else {
        if (i == 0) {
          if (s[i + 1] == 'o') {
            t[i] = '.';
          }
          else {
            r_isPuttable.insert(i);
          }
        }
        else if (i == s.size() - 1) {
          if (s[i - 1] == 'o' || t[i - 1] == 'o') {
            t[i] = '.';
          }
          else {
            r_isPuttable.insert(i);
          }
        }
        else {
          if (s[i - 1] == 'o' || t[i - 1] == 'o' || s[i + 1] == 'o') {
            t[i] = '.';
          }
          else {
            r_isPuttable.insert(i);
          }
        }
      }
    }

    set<int>Puttable;
    for (int i : r_isPuttable) {
        if (l_isPuttable.count(i)) Puttable.insert(i);
    }

    if (o_cnt + Puttable.size() == k) {
        for (int i = 0; i < t.size(); i++) {
            if (Puttable.count(i)) t[i] = 'o';
            else if (i == t.size() - 1) if (t[i - 1] == 'o') t[i] = '.';
            else if (i == 0) continue;
            else {
                if (t[i - 1] == 'o' || t[i + 1] == 'o') t[i] = '.';
            }
        }

        for (int i = t.size(); i >= 0; i--) {
          if (Puttable.count(i)) t[i] = 'o';
          else if (i == t.size() - 1)
            if (t[i - 1] == 'o') t[i] = '.';
            else if (i == 0)
              continue;
            else {
              if (t[i - 1] == 'o' || t[i + 1] == 'o') t[i] = '.';
            }
        }
    }

    for (char c : t) cout << c;
    

    cout << "\n";
}