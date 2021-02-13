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
  ofstream fout ("breedflip.out");
  ifstream fin ("breedflip.in");

  string og, nw;
  int count = 0, n;
  fin >> n >> og >> nw;

  int i = 0;
  while (i < n) {
    // check if any char does not match,
    int j = i;
    // val("i", i); nl;
    if (nw[i] != og[i]) {
      // go into loop checking till a match is found. increasing counter first.
      count++;
      while (j < n) {
        if (nw[j] == og[j])
          break;
        // val(nw[i], og[i]);
        j++;
      }
      // nl;
      i += abs(i-j);
    }
    else
      i++;
  }
  fout << count << '\n';
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
