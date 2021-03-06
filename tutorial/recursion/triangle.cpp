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

}

void Triangle(int x) {
  if (x <= 0) return;

  Triangle(x-1);

  for (int i = 1; i <= x; i++)
    cout << "*";
  cout << '\n';
}

void Triangle_rev(int x) {
  if (x <= 0) return;

  for (int i = 1; i <= x; i++)
    cout << "*";
  cout << '\n';

  Triangle_rev(x-1);
}

int main() {
  // ofstream fout ("");
  // ifstream fin ("");
  // int t;
  // cin >> t;
  // while (t--)
  solve();
  int n;
  cin >> n;
  Triangle(n);
  Triangle_rev(n);
  return 0;
}
