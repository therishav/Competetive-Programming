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
  set<char> st;
  
  cin >> a;
  for (int i = 0; i < a.size(); i++) 
    st.insert(a[i]);
  
  if (st.size() % 2 == 0) 
    cout << "CHAT WITH HER!" << '\n';
  else
    cout << "IGNORE HIM!" << '\n';
  // print(int(a[0])-65);
  // print(int(a[1])-65);
}

int main() {
  // ofstream fout ("");
  // ifstream fin ("");
  solve();
  return 0;
}


