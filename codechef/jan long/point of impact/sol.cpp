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
  int n, k, x, y, bounce = 0;
  cin >> n >> k >> x >> y;
  ii before = make_pair(x, y), current = make_pair(x+1, y+1); // current is before shot at 45deg angle with horizontal

  // loop exits when hits any stopping case;
  // after exit we can just print the current coordinates.
  while (true) {
    // if the ball hits a corner, it stops!
    if (((current.first == 0) && (current.second == 0)) ||
        ((current.first == n) && (current.second == 0)) ||
        ((current.first == n) && (current.second == n)) ||
        ((current.first == 0) && (current.second == n)) ||
        (bounce == k))
      break;

    // check if ball hits side 1
    else if ((current.second == 0)) {
      // it comes from left

    }

  }

}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  // ofstream fout ("");
  // ifstream fin ("");
  solve();
  return 0;
}
