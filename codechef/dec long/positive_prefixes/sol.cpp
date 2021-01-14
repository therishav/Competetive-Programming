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
#define print(a, b) cout << a << " : " << b << " | ";
#define nl cout << '\n';
#define rep(i, a, b) for (int i = a; i < b; i++)
#define printV(arr) for (auto i : arr) cout << i << " "; cout << '\n';

void solve() {
  int n, k, count = 0;
  cin >> n >> k;

  if (n == k) {
    rep(i, 1, n+1) 
      cout << i << " ";
    cout << '\n';
  }
  else {
    int i = 1;
    while (count < k) {
      cout << i << " ";
      i++; count++;
    }
    for (int j = k+1; j <= n; j++) 
      cout << j*(-1) << " ";
    cout << '\n';
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

