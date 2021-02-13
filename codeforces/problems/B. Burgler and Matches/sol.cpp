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
  int m, n, boxes, matches, count = 0;
  vii arr;
  cin >> n >> m;
  rep(i, 0, m) {
    cin >> boxes >> matches;
    arr.push_back(make_pair(matches, boxes));
  }

  sort(arr.begin(), arr.end(), greater<ii>());

  // for (auto i : arr) {
  //   val(i.first, i.second); nl;
  // }

  auto it = arr.begin();
  while (n && it != arr.end()) {
    if (it->second < n) {
      // boxes are less than required n.
      count += (it->first * it->second);
      n -= it->second;
    }
    else {
      // boxes are more than n, so we can fill all n.
      count += (n * it->first);
      n = 0;
    }
    it++;
  }
  cout << count << '\n';
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
