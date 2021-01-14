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
  string s;
  bool flag = true;
  stack<char> stk;
  cin >> s;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '(')
      stk.push('(');
    else if (stk.empty()) {
      if (s[i] == ')')) {
      flag = false;
      break;
    }
  }
    else if (!stk.empty() && (s[i] == ')' || s[i] == '?'))
      stk.pop();
  }
  if (flag)
    cout << "YES" << '\n';
  else
    cout << "NO" << '\n';
}

int main() {
  // ofstream fout ("");
  // ifstream fin ("");
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}
