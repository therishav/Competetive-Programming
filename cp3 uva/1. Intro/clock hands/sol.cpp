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
  int h, m;
  char c;
  double ah, am, ans;

  while (true) {
    cin >> h >> c >> m;

    if (h == 0 && m == 0)
      break;

    if (h == 12)
      h = 0;

    ah = (h * 60 + m) * 0.5;      // hour hand moves 0.5 deg in 1 min.
    am = m * 6;                  // min hand moves 6 deg in 1 min
    ans = abs(ah-am);            // difference between both hands;

    ans = min(abs(360-ans), ans);    // min angle that is made between both hands.
    cout << setprecision(3) << fixed << ans << '\n';
  }
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
