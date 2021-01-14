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
  int n, m;
  char c;
  bool colour = false;

  cin >> n >> m;
  vector<char> arr[n];
  rep(i, 0, n) {
    rep(j, 0, m) {
      cin >> c;
      if ((c == 'C') || (c == 'M') || (c == 'Y')) {
        colour = true;
        goto end;
      }
    }
  }


 end:
  if (colour)
    cout << "#Color" << '\n';
  else
    cout << "#Black&White" << '\n';
  // print2V(arr);
}

int main() {
  // ofstream fout ("");
  // ifstream fin ("");
  solve();
  return 0;
}
