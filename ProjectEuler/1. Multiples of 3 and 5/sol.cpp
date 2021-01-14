// multiples of 3 and 5 below n
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
  ll sum = 0, sum3, sum5, sum15, n, count3, count5, count15;
  cin >> n;

  count3 = (n-1)/3;
  count5 = (n-1)/5;
  count15 = (n-1)/15;
  sum3  =  3 * (count3*(count3+1))/2;
  sum5 = 5 * (count5*(count5+1))/2;
  sum15 = 15 * (count15*(count15+1))/2;
  sum = sum3 + sum5 - sum15;
  // val("sum", sum); nl;
  // 3, 6, 9, 12, 15, 5, 10
  // val("count5", count5); nl;
  cout << sum << '\n';
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
