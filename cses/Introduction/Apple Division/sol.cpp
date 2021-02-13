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

// backtracing to find all possible subsets with min difference. using bitmask
void solve() {
  int n;
  ll dif = INT_MAX;
  cin >> n;
  vi arr(n);
  rep(i, 0, n)
    cin >> arr[i];
  for (int b = 0; b < (1 << n); b++) {
    ll s1 = 0, s2 = 0;
    rep(i, 0, n) {
      if (b & (1 << i))
        s1 += arr[i];
      else
        s2 += arr[i];
    }
    ll d = abs(s1 - s2);
    if (dif > d)
      dif = d;
  }
  cout << dif << '\n';
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
