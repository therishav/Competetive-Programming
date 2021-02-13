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
  int n;
  cin >> n;
  vi arr(n);
  vi nt;
  int sum = 0;
  rep(i, 0, n) {
    int a;
    cin >> a;
    if (a % 2 == 0)
      arr[i] = a / 2;
    else {
      arr[i] = floor((double)a/2);
      // val("arr[i]", arr[i]); nl;
      nt.push_back(i);
    }
    sum += arr[i];
  }

  // val("sum", sum); nl;

  int i = 0;
  while (sum != 0) {
    if (sum < 0)
      sum++;
    else
      sum--;
    arr[nt[i]]++;
    i++;
  }

  // val("sum", s); nl;
  rep(i, 0, n)
    cout << arr[i] << '\n';
}
int main() {
  // ofstream fout ("");
  // ifstream fin ("");
  // int t;
  // cin >> t;
  // while (t--)
  solve();
  // int a = floor((double)-241/2);
  // cout << a << '\n';
  // a++;
  // cout << a << '\n';
  return 0;
}
