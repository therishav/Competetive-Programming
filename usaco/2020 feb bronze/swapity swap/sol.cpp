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
  ofstream fout ("swap.out");
  ifstream fin ("swap.in");
  int n, k, a1, a2, b1, b2;
  fin >> n >> k >> a1 >> a2 >> b1 >> b2;
  vi arr(n+1);
  rep(i, 0, n+1)
    arr[i] = i;
  while (k--) {
    reverse(arr.begin()+a1, arr.begin()+a2+1);
    reverse(arr.begin()+b1, arr.begin()+b2+1);
  }
  rep(i, 1, n+1)
    fout << arr[i] << '\n';
}

int main() {

  // int t;
  // cin >> t;
  // while (t--)
  solve();
  return 0;
}
