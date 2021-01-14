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
  int n1, n2, n3, temp;
  unordered_map<int, int> mp;
  set<int> st;
  
  cin >> n1 >> n2 >> n3;
  while (n1--) {
    cin >> temp;
    mp[temp]++;
  }
  while (n2--) {
    cin >> temp;
    mp[temp]++;
  }
  while (n3--) {
    cin >> temp;
    mp[temp]++;
  }

  for (auto i : mp) {
    if (i.second >= 2) 
      st.insert(i.first);
  }

  cout << st.size() << '\n';;
  for (auto i : st)
    cout << i << '\n';
}

int main() {
  // ofstream fout ("");
  // ifstream fin ("");
  solve();
  return 0;
}


