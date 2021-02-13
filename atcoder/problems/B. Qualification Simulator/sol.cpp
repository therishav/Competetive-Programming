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
  int n, a, b, tot = 0, Opass = 0;
  string s;
  vi ostuds(100001);
  cin >> n >> a >> b >> s;

  int rk = 1;
  rep(i, 0, n) {
    if (s[i] == 'b') {
      ostuds[i] = rk;
      rk++;
    }
  }

  rep(i, 0, n) {
    if (s[i] == 'a') {
      if (tot < a+b) {
        cout << "Yes" << '\n';
        tot++;
      }
      else
        cout << "No" << '\n';
    }
    else if (s[i] == 'b') {
      if ((tot < a+b) && (ostuds[i] <= b)) {
        cout << "Yes" << '\n';
        tot++;
      }
      else
        cout << "No" << '\n';
    }
    else
      cout << "No" << '\n';
  }
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
