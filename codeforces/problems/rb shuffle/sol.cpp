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
  int n, rc = 0, bc = 0, ri, bi, temp;
  string r, b;
  stringstream ss;
  
  cin >> n >> r >> b;
  for (int i = 0; i < n; i++) {
    ri = int(r[i])-48;
    bi = int(b[i])-48;
    if (ri > bi)
      rc++;
    else if (ri < bi)
      bc++;
    else {
      rc++;
      bc++;
    }
  }
  if (rc > bc)
    cout << "RED" << '\n';
  else if (rc < bc)
    cout << "BLUE" << '\n';
  else
    cout << "EQUAL" << '\n';
}

int main() {
  // ofstream fout ("");
  // ifstream fin ("");
  int t;
  cin >> t;
  while (t--) 
    solve();
}


