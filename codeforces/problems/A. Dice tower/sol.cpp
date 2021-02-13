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
  int n, a, b, in_face, bot;
  cin >> n >> in_face;
  bot = 7-in_face;
  cin >> a >> b;
  bool flag = true;
  rep(i, 1, n) {
    vector<int> rem(7);
    cin >> a >> b;
    rem[a] = 1; rem[7-a] = 1;
    rem[b] = 1; rem[7-b] = 1;
    // val(a, 7-a); val(b, 7-b);
    // nl;
    if (rem[bot] == 1)
      flag = false;
    // printV(rem);
  }
  if (flag)
    cout << "YES" << '\n';
  else
    cout << "NO" << '\n';
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
