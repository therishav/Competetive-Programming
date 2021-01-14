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

void solve() {
  ll a, b, n;
  cin >> a >> b;
  if ((a == 1) && (b == 1))
    cout << "NO" << '\n';
  else if((a == 0) && (b == 0))
    cout << "YES" << '\n';
  else {
    while (true) {
      if ((a == 0) && (b == 0)) {
          cout << "YES" << '\n';
          break;
        }
      else if (((a == 0) && (b != 0)) || ((b == 0) && (a != 0))) {
        cout << "NO" << '\n';
        break;
      }


      if (a >= b) {
        a += (-2 * n);
        b += (-1 * n);
      }
      else {
        a += (-1 * n);
        b += (-2 * n);
      }
    }
  }
}

int main() {
  // ofstream fout ("");
  // ifstream fin ("");
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}
