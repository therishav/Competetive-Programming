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
  int n, val = 0, group = 0, temp;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> temp;
    if (temp != val) {
      group++;
      val = temp;
    }
  }
  cout << group << '\n';
}

int main() {
  // ofstream fout ("");
  // ifstream fin ("");
  solve();
  return 0;
}


