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

int x, y, cx = 0, cy = 0, mxlead = 0, leader = 0;
void solve() {
  cin >> x >> y;
  cx += x; cy += y;
  int lead = abs(cx-cy);
  // int diff = abs(lead - mxlead);
  // print(cx, cy); print(lead, diff); nl;
  if (lead > mxlead) {
    mxlead = lead;
    (x > y) ? leader = 1 : leader = 2;
  }
}

int main() {
  // ofstream fout ("");
  // ifstream fin ("");
  int n;
  cin >> n;
  while (n--)
    solve();
  cout << leader << " " << mxlead << '\n';
}


