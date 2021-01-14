/*
  ID: dzlvocp1
  TASK:
  LANG: C++
*/
/* LANG can be C++11 or C++14 for those more recent releases */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<pair<int, int>> vii;
#define print(a) cout << a << '\n';
#define val(a, b) cout << a << " : " << b << " | ";
#define nl cout << '\n';
#define rep(i, a, b) for (int i = a; i < b; i++)
#define printV(arr) for (auto i : arr) cout << i << " "; cout << '\n';
#define print2V(arr) for (auto i : arr) { for (auto j : i) cout << j << " "; cout << '\n'; }

void solve() {
  int n;
  char c;
  cin >> n;
  vector<char> v[n];
  rep(i, 0, n) {
    rep(j, 0, n) {
      cin >> c;
      v[i].push_back(c);
    }
  }
  int diag = v[0][0], other = v[0][1];
  bool sameDiag = true, sameOther;
  if (diag != other)
    sameOther = true;
  else
    sameOther = false;

  // check left diagonal and other.
  rep(i, 0, n) {
    rep(j, 0, n) {
      if (i == j) {
        // val(i,j);
        // cout << v[i][j];
        // nl;
        if (v[i][j] != diag)
          sameDiag = false;
      }
      if (j == n-1-i) {
        // val(i, j);
        // cout << v[i][j];
        // nl;
        if (v[i][j] != diag)
          sameDiag = false;
      }
      if (i != j && j != n-1-i) {
        if (v[i][j] != other)
          sameOther = false;
      }
    }
    // nl;
  }

  if (sameOther && sameDiag)
    cout << "YES" << '\n';
  else
    cout << "NO" << '\n';
  // print2V(v);
}

int main() {
  // ofstream fout ("");
  // ifstream fin ("");
  solve();
  return 0;
}
