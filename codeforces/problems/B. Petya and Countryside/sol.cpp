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
  int n, ans = 1;
  cin >> n;
  vi arr(n);
  rep(i, 0, n)
    cin >> arr[i];


  rep(i, 0, n) {
    int prev = i-1, next = i+1, pval = arr[i], nval = arr[i], count = 1;
    bool pb = false, nb = false;

    while (true) {
      // val("i", i); nl;
      if (prev >= 0) {
        if (!pb && arr[prev] <= pval) {
          // val("prev", arr[prev]);
          // val("cur val", pval); nl;
          count++;
          pval = arr[prev];
          prev--;
        }
        else
          pb = true;
      }
      else
        pb = true;

      if (next < n) {
        if (!nb && arr[next] <= nval) {
          // val("next val", arr[next]);
          // val("cur val", nval); nl;
          count++;
          nval = arr[next];
          next++;
        }
        else
          nb = true;
      }
      else
        nb = true;

      if (count > ans)
        ans = count;

      if (pb & nb)
        break;
    }
  }
  cout << ans << '\n';
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
