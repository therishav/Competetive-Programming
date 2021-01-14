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

struct union_find {
  vector<int> parent;
  union_find(int n) {
    parent = vector<int>(n);
    for (int i = 0; i < n; i++) {
      parent[i] = i;
    }
  }

  int find(int x) {
    if (parent[x] == x) {
      return x;
    } else {
      parent[x] = find(parent[x]);
      return parent[x];
    }
  }

  void unite(int x, int y) {
    parent[find(x)] = find(y);
  }
};

void solve() {
  bool flag = false;
  int x, y, k, n, req_pages, p, c;
  cin >> x >> y >> k >> n;
  req_pages = x - y;

  rep(i, 0, n) {
    cin >> p >> c;
    if (c <= k && p >= req_pages)
      flag = true;
  }
  if (flag)
    cout << "LuckyChef" << '\n';
  else
    cout << "UnluckyChef" << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  // ofstream fout ("");
  // ifstream fin ("");
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}
