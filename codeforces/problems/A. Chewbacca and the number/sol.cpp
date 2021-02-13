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
  // always invert digits which are largest. in descending order.
  string s;
  cin >> s;
  vi arr;
  priority_queue<int> pq;
  rep(i, 0, s.size()) {
    int a = s[i]-'0';
    if (a >= 5)
      pq.push(a);
    arr.push_back(a);
  }

  while(!pq.empty()) {
    int a = pq.top();
    rep(i, 0, arr.size()) {
      if (arr[i] == a && (i != 0 || arr[i] != 9))
        arr[i] = 9 - arr[i];
    }
    pq.pop();
  }
  for (auto i : arr)
    cout << i;
  nl;
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
