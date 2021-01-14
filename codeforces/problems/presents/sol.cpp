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

// functions
// transform() //binary or unary operation on each element of an array or arrays of same length.
void solve() {
  int n, temp;
  cin >> n;
  vector<int> arr(n+1);
  for (int i = 1; i <= n; i++) {
    cin >> temp;
    arr[temp] = i;
  }
  rep (i, 1, n+1) 
    cout << arr[i] << " ";
  nl;
}

int main() {
  // ofstream fout ("");
  // ifstream fin ("");
  // int t;
  // cin >> t;
  // while (t--)
  solve();
}


