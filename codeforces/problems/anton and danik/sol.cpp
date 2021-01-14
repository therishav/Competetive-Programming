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
  int n, a = 0, d = 0;
  char g;
  cin >> n;
  while (n--) {
    cin >> g;
    if (g == 'A')
      a++;
    else
      d++;
  }
  if (a > d)
    cout << "Anton" << '\n';
  else if (d > a)
    cout << "Danik" << '\n';
  else
    cout << "Friendship" << '\n';
}

int main() {
  // ofstream fout ("");
  // ifstream fin ("");
  solve();
}


