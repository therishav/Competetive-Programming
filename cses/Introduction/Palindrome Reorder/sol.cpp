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
  string s;
  map<char, int> mp;
  cin >> s;
  rep(i, 0, s.size())
    mp[s[i]]++;

  int n = s.size(), oddCount = 0;
  char c;
  for (auto i : mp) {
    if (i.second % 2 != 0) {
      oddCount++;
      c = i.first;
    }
  }
  vector<char> ans;
  if (n % 2 != 0) {
    if (oddCount > 1)
      cout << "NO SOLUTION" << '\n';
    else {
      for(auto i : mp) {
        // if (i.first != c) {
          int t = i.second/2;
          while(t--) {
            cout << i.first;
            ans.push_back(i.first);
          }
        // }
      }
      cout << c;
      reverse(ans.begin(), ans.end());
      for (auto i : ans)
        cout << i;
      nl;
    }
  }
  else {
    if (oddCount != 0)
      cout << "NO SOLUTION" << '\n';
    else {
      for (auto i : mp) {
        int t = i.second/2;
        while(t--) {
          cout << i.first;
          ans.push_back(i.first);
        }
      }
      reverse(ans.begin(), ans.end());
      for (auto i : ans)
        cout << i;
      nl;
    }
  }
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
