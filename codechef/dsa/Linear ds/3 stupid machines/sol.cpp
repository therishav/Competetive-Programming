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
  int n, pos;
  ll temp, min = INT_MAX, ans = 0;
  cin >> n;
  vector<int> arr(n);

  for (int i = 0; i < n; i++) {
    cin >> temp;
    arr[i] = temp;
    if (min > temp)
      min = temp;
  }

  // first loop decreases each element by m;
  for (int i = 0; i < n; i++) {
    arr[i] -= min;
    if (arr[i] == 0)
      arr[i] = INT_MAX;
  }
  ans += min;
  
  while (arr[0] != INT_MAX) {
    // find the new min position
    auto m = min_element(arr.begin(), arr.end());
    for (auto it = arr.begin(); it <= m; it++) {
      *it = *m;
      ans += *m;
    }
  }

  cout << ans << '\n';
}

int main() {
  // ofstream fout ("");
  // ifstream fin ("");
  int t;
  cin >> t;
  while (t--)
    solve();
}
