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
#define print(a, b) cout << a << " : " << b << " | ";
#define nl cout << '\n';
#define rep(i, a, b) for (int i = a; i < b; i++)
#define printV(arr) for (auto i : arr) cout << i << " "; cout << '\n';

void solve() {
  ll x, y, ex, ox, ey, oy;
  cin >> x >> y;
  if (x % 2 == 0) {
    ex = x / 2;
    ox = x / 2;
  }
  else {
    ex = floor(x / 2);
    ox = floor(x / 2) + 1;
  }

  if (y % 2 == 0) {
    ey = y / 2;
    oy = y / 2;
  }
  else {
    ey = floor(y / 2);
    oy = floor(y / 2) + 1;
  }

  cout << (ex * ey) + (ox * oy) << '\n';
}

int main() {
  // ofstream fout ("");
  // ifstream fin ("");
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}


