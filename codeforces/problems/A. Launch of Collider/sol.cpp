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
  int n;
  string s;
  cin >> n >> s;
  vi arr(n);
  rep(i, 0, n)
    cin >> arr[i];

  int mi = INT_MAX;
  for (int i = 0, j = 1; i < n-1; i++,j++) {
    if (s[i] == 'R' && s[j] == 'L') {
      int d = (arr[j] - arr[i]) / 2;
      // val(i, j);
      // val(arr[i], arr[j]);
      // val("d", d)nl;
      if (d < mi)
        mi = d;
    }
  }
  if (mi == INT_MAX)
    cout << -1;
  else
    cout << mi;
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
