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
  int n, m, pos, b;
  ll countV = 0, countP = 0;
  cin >> n;

  vi arr(n+1);
  rep(i, 1, n+1) {
    int tmp;
    cin >> tmp;
    arr[tmp] = i;
  }

  cin >> m;
  rep(i, 1, m+1) {
    cin >> b;
    pos = arr[b];
    // comparisions needed for LS from l --> r
    countV += pos;
    // comparisions needed for LS from r --> l
    countP += (n - pos + 1);
  }
  cout << countV << " " << countP << '\n';
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
