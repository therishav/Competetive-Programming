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
  int n, m, k, count = 0, avb;
  cin >> n >> m >> k;
  vi arr(n);
  rep(i, 0, n)
    cin >> arr[i];


  rep(i, 0, m) {
    cin >> avb;
    sort(arr.begin(), arr.end());
    printV(arr);
    auto it = lower_bound(arr.begin(), arr.end(), avb);
    val(avb, *it); nl;
    if (it != arr.end() && (avb >= (*it-k) && avb <= (*it+k))) {
      *it = -1;
      count++;
    }
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
