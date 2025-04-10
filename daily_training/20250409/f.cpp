#include <bits/stdc++.h>
using namespace std;
// #include <atcoder/all>
// using namespace atcoder;

int main() {
  int h, w;
  cin >> h >> w;
  vector<vector<char>> c(h, vector<char>(w));
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) cin >> c[i][j];
  }

  int n = min(h, w);
  vector<int> s(n, 0);

  const int di[] = { 1, 1, -1, -1 }, dj[] = { 1, -1, 1, -1 };
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      if (c[i][j] == '.') continue;
      bool isCenter = true;
      for (int v = 0; v < 4; v++) {
        int ni = i + di[v], nj = j + dj[v];
        if (ni < 0 || ni >= h || nj < 0 || nj >= w) {
          isCenter = false;
        }

        if(isCenter && c[ni][nj] == '.') {
            isCenter = false;
        }
      }
      if (isCenter) {
        int d = 0;
        int ni = i, nj = j;
        auto isAccessible = [&](int ni, int nj) {
          return !(ni < 0 || ni >= h || nj < 0 || nj >= w);
        };

        while (isAccessible(ni + 1, nj + 1) && c[ni + 1][nj + 1] == '#') {
          ni++;
          nj++;
          d++;
        }
        d--;
        s[d]++;
      }
    }
  }
  for (int i = 0; i < n; i++) {
    cout << s[i] << " ";
  }
  cout << "\n";
}