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
typedef vector<pair<int, int> > vii;
#define print(a) cout << a << '\n';
#define val(a, b) cout << a << " : " << b << " | ";
#define nl cout << '\n';
#define rep(i, a, b) for (int i = a; i < b; i++)
#define printV(arr) for (auto i : arr) cout << i << " "; cout << '\n';
#define print2V(arr) for (auto i : arr) {for (auto j : i) cout << j << " "; cout << '\n';}

void solve() {
  int n, m, count = 0;
  char c;
  bool flag = true;
  cin >> n >> m;
  vector<vector<char> > arr;

  for (int i = 0; i < n; i++) {
    vector<char> tmp;
    for (int j = 0; j < m; j++) {
      cin >> c;
      tmp.push_back(c);
    }
    arr.push_back(tmp);
  }

  for (int col = 0; col < m; col++) {
    for (int row = 0; row < n; row++) {
      if (arr[row][col] == '$') {
        flag = false;
        break;
      }
    }
    if (flag)
      count++;
    else
      flag = true;
  }

  cout << count+1 << '\n';
  // print2V(arr);
}



int main() {
  // ofstream fout ("");
  // ifstream fin ("");
  solve();
  return 0;
}
