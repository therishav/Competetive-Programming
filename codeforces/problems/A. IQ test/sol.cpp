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
  vector<vector<int>> arr(4, vector<int> (4));
  rep(i, 0, 4) {
    rep(j, 0, 4) {
      char c;
      cin >> c;
      if (c == '#')
        arr[i][j] = 1;
      else
        arr[i][j] = 0;
    }
  }
  // print2V(arr);

  bool flag = false;
  rep(i, 0, 4) {
    rep(j, 0, 4) {
      if (i+1 < 4 && j+1 < 4) {
        int s = arr[i][j] + arr[i][j+1] + arr[i+1][j] + arr[i+1][j+1];
        if (s == 0 || s == 4 || s == 3 || s == 1) {
          flag = true;
        }
      }
    }
    if (flag)
      break;
  }

  if (flag)
    cout << "YES";
  else
    cout << "NO";
  nl;
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
