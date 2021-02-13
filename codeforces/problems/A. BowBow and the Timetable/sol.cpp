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
  int count = 0, mult = 0;
  bool inc = false;
  string s;
  cin >> s;
  reverse(s.begin(), s.end());
  rep(i, 0, s.size()) {
    if (i < s.size()-1 && s[i] == '1')
      inc = true;
    if (i == 2*mult) {
      count++;
      mult++;
    }
  }
  // val("count", count) nl;
  if (inc || (s.size() % 2 == 0))
    cout << count;
  else
    cout << count-1;
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
