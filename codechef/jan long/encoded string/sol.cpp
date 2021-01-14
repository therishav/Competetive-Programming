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
#define print2V(arr) for (auto i : arr) { for (auto j : i) cout << j << " "; cout << '\n'; }

void solve() {
  int n;
  string s;
  cin >> n >> s;
  vector<int> v;
  int i = 0;
  while(i < n) {
    int low = 1, high = 16;
    // val("Iteration ", i); nl;
    for(int j = i; j < i+3; j++) {
      // val(low, high);
      if(s[j] == '0')
        high = (low+high)/2;
      else
        low = (low+high)/2 + 1;
    }

    // val(low, high); nl;
    if (s[i+3] == '0')
      v.push_back(low);
    else
      v.push_back(high);

    i+=4;
  }
  // cout << char(96+1) << '\n';
  for (auto i : v)
    cout << char(96+i);
  cout << '\n';
  // printV(v);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  // ofstream fout ("");
  // ifstream fin ("");
  int t;
  cin >> t;
  while(t--)
    solve();
  return 0;
}
