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
  string initial, segment, rem;
  cin >> initial >> rem;
  stringstream ss(initial);
  vector<string> dlist;
  int c1, c2, rc = rem.size();
  bool flag = true;


  while(getline(ss, segment, '|')) {
    dlist.push_back(segment);
  }

  if (initial.back() == '|')
    dlist.push_back("");

  c1 = dlist[0].size();
  c2 = dlist[1].size();

  // cout << dlist[1] << '\n';
  // val(c1, c2);
  // val("rec", rc); nl;
  int d = abs(c1-c2);
  // when its impossible to operate
  if ((c1 == c2 && rc % 2 != 0) || (d > rc) || (d % 2 != 0 && (rc % 2 == 0)) || (d % 2 == 0 && (rc % 2 != 0)))
    flag = false;
  else {
    if (c1 == c2) {
      rep(i, 1, rc+1) {
        if (i <= (rc/2))
          dlist[0].push_back(rem[i-1]);
        else
          dlist[1].push_back(rem[i-1]);
      }
    }
    else {
      int i = 0;
      while (rc != 0) {
        if (c1 < c2) {
          dlist[0].push_back(rem[i]);
          c1++;
        }
        else {
          dlist[1].push_back(rem[i]);
          c2++;
        }
        i++;
        rc--;
      }
    }
  }
  if (flag)
    cout << dlist[0] << "|" << dlist[1] << '\n';
  else
    cout << "Impossible" << '\n';
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
