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
#define val(a, b) cout << a << " : " << b << " | ";
#define nl cout << '\n';
#define rep(i, a, b) for (int i = a; i < b; i++)
#define printV(arr) for (auto i : arr) cout << i << " "; cout << '\n';

// functions
// transform() //binary or unary operation on each element of an array or arrays of same length.
void solve() {
  int n, k;
  cin >> n >> k;

  int j = 1;
  for (int i = 1; i <= n; i++) {
    cout << char(j + 96);
    j++;
    if (j > k)
      j = 1;
  }
  nl;
  // cout << char((3 % 2) + 96); nl;
}

int main() {
  // ofstream fout ("");
  // ifstream fin ("");
  solve();
}


