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

is_cp(ll a, ll b) {
  return __gcd(a, b) == 1;
}
void solve() {
  ll l, r, a, b, c;
  bool flag = false;
  cin >> l >> r;
  if (abs(l - r) == 1)
    goto end;
  else {
    for (ll i = l; i <= r-2; i++) {
      for (ll j = i+1; j <= r-1; j++) {
        if (is_cp(i, j)) {
          for (ll k = i+1; k <= r; k++) {
            if (is_cp(j, k) && (!is_cp(i, k))) {
              a = i;
              b = j;
              c = k;
              flag = true;
              goto end;
            }
          }
        }
      }
    }
  }

 end:
  if (flag)
    cout << a << " " << b << " " << c <<'\n';
  else
    cout << -1 << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  // ofstream fout ("");
  // ifstream fin ("");
  // int t;
  // cin >> t;
  // while (t--)
    solve();
  return 0;
}
