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
  int n, t;
  cin >> n >> t;

  if (t == 10) {
    if (n == 1)
      cout << -1;
    else {
      cout << 10;
      for (int i = 1; i < n-1; i++)
        cout << 0;
    }
  }
  else {
    cout << t;
    for (int i = 1; i < n; i++)
      cout << 0;
  }
  cout << '\n';
}

int main() {
  // ofstream fout ("");
  // ifstream fin ("");
  solve();
  return 0;
}
