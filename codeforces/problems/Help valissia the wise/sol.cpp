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
typedef vector<int> vi;

#define print(a) cout << a << '\n';
#define val(a, b) cout << a << " : " << b << " | ";
#define nl cout << '\n';
#define rep(i, a, b) for (int i = a; i < b; i++)
#define printV(arr) for (auto i : arr) cout << i << " "; cout << '\n';
#define print2V(arr) for (auto i : arr) { for (auto j : i) cout << j << " "; cout << '\n'; }

void solve() {
  int r1, r2, c1, c2, d1, d2, a, b, c, d;
  bool flag = false;
  cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;

  rep(i, 1, 10) {
    rep(j, 1, 10) {
      rep(k, 1, 10) {
        rep(l, 1, 10) {
          set<int> st = {i, j, k, l};
          if ((st.size() == 4) && (i + j == r1) && (k + l == r2) && (i + k == c1) && (j + l == c2) && (i + l == d1) && (j + k == d2)) {
            flag = true;
            a = i; b = j; c = k; d = l;
            break;
          }
        }
      }
    }
  }
  if (flag)
    cout << a << " " << b << '\n' << c << " " << d << '\n';
  else
    cout << -1 << '\n';
}

int main() {
  // ofstream fout ("");
  // ifstream fin ("");
  // int t;
  // cin >> t;
  // while (t--)
  solve();
  return 0;
}
