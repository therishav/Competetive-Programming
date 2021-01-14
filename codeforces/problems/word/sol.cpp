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
  string a;
  int up = 0, low = 0;
  cin >> a;
  for (int i = 0; i < a.size(); i++) {
    if (isupper(a[i]))
      up++;
    else
      low++;
  }
  if (up > low)
    transform(a.begin(), a.end(), a.begin(), ::toupper);
  else if (up <= low)
    transform(a.begin(), a.end(), a.begin(), ::tolower);
  cout << a << '\n';
}

int main() {
  // ofstream fout ("");
  // ifstream fin ("");
  solve();
  return 0;
}


