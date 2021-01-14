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
  int n, m, swaps = 0;
  ll total1 = 0, total2 = 0;
  bool possible = false;
  cin >> n >> m;
  vector<int> v1(n), v2(m);
  rep(i, 0, n) {
    cin >> v1[i];
    total1 += v1[i];
  }
  rep(i, 0, m) {
    cin >> v2[i];
    total2 += v2[i];
  }

  if (total1 > total2)
    cout << swaps << '\n';
  else {
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end(), greater<int>());
    int i = 0, j = 0;
    while(true) {
      // val(i, j); nl;
      // val(total1, total2); nl;
      total1 = total1 - v1[i] + v2[j];
      total2 = total2 - v2[j] + v1[i];
      swap(v1[i], v2[j]);
      swaps++;
      if (total1 > total2) {
        possible = true;
        break;
      }
      if (i+1 != n && j+1 != m) {
        i++;
        j++;
      }
      else
        break;
    }
    if (possible)
      cout << swaps << '\n';
    else
      cout << -1 << '\n';
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  // ofstream fout ("");
  // ifstream fin ("");
  int t;
  cin >> t;
  while(t--)
    solve();
  return 0;
}
