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
  int length = 0;
  union_find(int n) {
    parent = vector<int>(n);
    for (int i = 0; i < n; i++) {
      parent[i] = i;
    }
  }

  int find_len(int x) {
    length = 0;
    while (true) {
      // val(x, parent[x]); nl;
      if (parent[x] == x)
        return length;
      else {
        length += (abs(x - parent[x]) % 1000);
        x = parent[x];
     }
    }
  }

  int find(int x) {
    while (true) {
      if (parent[x] == x)
        return x;
      else
        x = parent[x];
    }
  }

  void unite(int x, int y) {
    parent[find(x)] = find(y);
  }
};

void solve() {
  int n, i, j, k, x;
  char c;
  cin >> n;
  union_find un(n+1);
  k = 0;
  while (true) {
    cin >> c;
    if (c == 'O')
      break;
    else if (c == 'E') {
      cin >> x;
      cout << un.find_len(x) << '\n';
    }
    else {
      cin >> i >> j;
      un.unite(i, j);
    }
  }
  // union_find un(5);
  // cout << un.find_len(3) << '\n';
  // un.unite(3, 1);
  // cout << un.find_len(3) << '\n';
  // un.unite(1, 2);
  // cout << un.find_len(3) << '\n';
  // un.unite(2, 4);
  // cout << un.find_len(2) << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  // ofstream fout ("");
  // ifstream fin ("");
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
