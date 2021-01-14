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
  ll n, k, d, problem = 0, count = 0, temp;
  cin >> n >> k >> d;
  rep(i, 0, n) {
    cin >> temp;
    problem += temp;
  }
  if (problem < k)
    cout << 0 << '\n';
  else {
    count = problem / k;
    if (d <= count)
      cout << d << '\n';
    else
      cout << count << '\n';
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
