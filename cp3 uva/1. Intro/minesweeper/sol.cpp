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
  int n, m, count = 1;
  char c;

  while (true) {
    cin >> n >> m;

    if (n == 0 && m == 0)
      break;

    if (count > 1)
      nl;
    cout << "Field #" << count << ":" << '\n';
    vector<vector<char>> arr(n, vector<char> (m, 0));

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        cin >> c;
        if (c == '.')
          arr[i][j] = '0';
        else
          arr[i][j] = '*';
      }
    }
    // print2V(arr); nl;

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (arr[i][j] == '*') {

          // go to all adjacent cells IF POSSIBLE
          if ((i-1 >= 0) && (arr[i-1][j] != '*'))// up cr
            arr[i-1][j]++;

          if ((i+1 <= n-1) && (arr[i+1][j] != '*')) // down cr
            arr[i+1][j]++;

          if ((j-1 >= 0) && (arr[i][j-1]) != '*')    // left cr
            arr[i][j-1]++;

          if ((j+1 <= m-1) && (arr[i][j+1] != '*'))    // right cr
            arr[i][j+1]++;

          if ((i-1 >= 0  && j-1 >= 0) && (arr[i-1][j-1] != '*')) // diag left up cr
            arr[i-1][j-1]++;

          if ((i+1 <= n-1 && j-1 >= 0) && (arr[i+1][j-1] != '*')) // diag left down cr
            arr[i+1][j-1]++;

          if ((i-1 >= 0 && j+1 <= m-1) && (arr[i-1][j+1] != '*'))// diag right up cr
            arr[i-1][j+1]++;

          if ((i+1 <= n-1 && j+1 <= m-1) && (arr[i+1][j+1]) != '*')// diag right down cr
            arr[i+1][j+1]++;
        }
      }
    }
    for (auto i : arr) {
      for (auto j : i) {
        cout << j;
      }
      nl;
    }

    count++;
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  // ofstream fout ("");
  // ifstream fin ("");
  // int t;
  // cin >> t;
  // while (t--)
  solve();
  return 0;
}
