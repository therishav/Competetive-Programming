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
  int n, max = INT_MIN;
  map<string, int> mp;
  set<string> st;
  string s, mx;
  cin >> n;
  rep(i, 0, n) {
    cin >> s;
    mp[s]++;
    if (mp[s] > max) {
      max = mp[s];
      mx = s;
    }
  }

  // for (auto i : mp)
  //   val(i.first, i.second);
  // nl;
  cout << mx << '\n';
}

int main() {
  // ofstream fout ("");
  // ifstream fin ("");
  solve();
  return 0;
}
