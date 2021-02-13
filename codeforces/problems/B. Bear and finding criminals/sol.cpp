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
  int n, a;
  cin >> n >> a;
  vi arr(n+1);
  rep(i, 1, n+1)
    cin >> arr[i];

  bool ld = false, rd = false;
  int dist = 0, count = 0;
  while (true) {
    bool lc = false, rc = false;
    if (dist == 0 && arr[a])
      count++;
    else if (dist != 0) {

      // left side
      if (a-dist >= 1) {
        if (arr[a-dist] == 1)
          lc = true;
      }
      else
        ld = true;

      // right side
      if (a+dist <= n) {
        if (arr[a+dist] == 1)
          rc = true;
      }
      else
        rd = true;

      if (lc && rc)
        count += 2;
      else if (lc && rd)
        count++;
      else if (rc && ld)
        count++;
    }

    if (ld && rd)
      break;
    dist++;
  }
  cout << count << '\n';
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
