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

void solve() {
  int n, temp, dpos, depth = 0, max_depth = INT_MIN, s = 0, ms = INT_MIN, spos = 0;
  stack<int> stk;
  map<int, int> mp;
  
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> temp;
    if (temp == 1) {
      depth++;

      if (stk.empty()) {
	spos = i;
	mp[spos] = 0;
      }
      stk.push(1);
      s++;
    }
    else {
      depth--;

      stk.pop();
      s++;
      if (stk.empty()) {
	if (s > ms) {
	  // print(i, s); nl;
	  ms = s;
	  mp[spos] = ms;
	}
	s = 0;
      }
    }
    if (depth > max_depth) {
      max_depth = depth;
      dpos = i;
    }
  }
  cout << max_depth << " "
       << dpos << " "
       << ms << " ";

  for (auto itr : mp) {
    if (itr.second == ms)
      cout << itr.first << '\n';
  }
}

int main() {
  // ofstream fout ("");
  // ifstream fin ("");
  solve();
}


