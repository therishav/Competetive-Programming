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
  int val, sz, min = INT_MAX, n;
  stringstream ss;
  string sn, newS;
  cin >> sn;
  n = sn.size();
  // ss << n;
  // ss >> sn;
  rep(i, 0, n) {
    newS = sn;
    newS.erase(i, 1);
    // val(i, newS); nl;
    ss << newS;
    ss >> val;
    if (val < min)
      min = val;
    ss.clear();
  }
  cout << min << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  // ofstream fout ("");
  // ifstream fin ("");
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}