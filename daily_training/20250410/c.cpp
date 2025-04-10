#include <bits/stdc++.h>
using namespace std;
// #include <atcoder/all>
// using namespace atcoder;

bool isNum(char c) {
  return ('0' <= c && c <= '9');
}

int main() {
  int r, c;
  cin >> r >> c;
  vector b(r, vector<char>(c));
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) cin >> b[i][j];
  }

  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      if (isNum(b[i][j])) {
        int n = b[i][j] - '0';
        for (int k = 0; k < r; k++) {
          for (int l = 0; l < c; l++) {
            if (abs(i - k) + abs(j - l) <= n) {
              if (i == k && j == l) b[i][j] = '.';
              else if (isNum(b[k][l]))
                continue;
              else
                b[k][l] = '.';
            }
          }
        }
      }
    }
  }

  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) cout << b[i][j];
    cout << "\n";
  }
}