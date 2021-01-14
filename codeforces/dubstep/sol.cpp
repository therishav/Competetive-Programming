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
  string s;
  cin >> s;
  if (s.size() < 3)
    cout << s << '\n';
  else {
    rep(i, 0, s.size()-2) {
      if ((s[i] == 'W') && (s[i+1] == 'U') && (s[i+2] == 'B')) {
        s[i] = '*';
        s[i+1] = '*';
        s[i+2] = '*';
      }
    }
    // print(s);
    int i = 0;
    while (i < s.size()) {
      // val(i, s[i]); nl;
      if (s[i] == '*')
        i++;
      else {
        while (s[i] != '*' && i < s.size()) {
          cout << s[i];
          i++;
          if (s[i] == '*')
            cout << " ";
        }
      }
    }
    // cout << s;
    nl;
  }
}

int main() {
  // ofstream fout ("");
  // ifstream fin ("");
  solve();
  return 0;
}
