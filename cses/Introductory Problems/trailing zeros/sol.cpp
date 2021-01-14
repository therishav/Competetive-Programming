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

void solve() {
  ll n, k, count = 0;
  cin >> n;
  k = log(n)/log(5);
  for (int i = 1; i <= k; i++)
    count += floor(n / pow(5, i));
  cout << count << '\n';

}

int main() {
  // ofstream fout ("");
  // ifstream fin ("");
  solve();
  return 0;
}
