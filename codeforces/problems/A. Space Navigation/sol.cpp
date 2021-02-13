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
  int x, y, sx = 0, sy = 0;
  vi arsx(2), arsy(2);
  string s;
  cin >> x >> y >> s;

  rep(i, 0, s.size()) {
    if (s[i] == 'L') {
      sx += -1;
      arsx[0]--;
    }
    else if (s[i] == 'R') {
      sx += 1;
      arsx[1]++;
    }
    else if (s[i] == 'U') {
      sy += 1;
      arsy[1]++;
    }
    else if (s[i] == 'D') {
      sy += -1;
      arsy[0]--;
    }
  }

  // cout << "x" << ": "; val(arsx[0], arsx[1]); nl;
  // cout << "y" << ": "; val(arsy[0], arsy[1]); nl;

  bool fx, fy;
  if (x <= arsx[1] && x >= arsx[0])
    fx = true;
  else
    fx = false;

  if (y <= arsy[1] && y >= arsy[0])
    fy = true;
  else
    fy = false;

  if (fx && fy)
    cout << "YES";
  else
    cout << "NO";
  nl;
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
