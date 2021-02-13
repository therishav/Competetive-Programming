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
  int cur = 0, n, tmp, mx = -1;
  cin >> n;
  vi arr(n+1);

  rep(i, 1, n+1) {
    cin >> tmp;
    if (tmp > mx)
      mx = tmp;
    arr[i] = tmp;
  }

  cout << mx << '\n';
  // now, we know the max coins req to pass the game, will be mx.
  // our goal will be to see if it is possible to do it less than mx;

  // calculating the strength req for each jump.

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
