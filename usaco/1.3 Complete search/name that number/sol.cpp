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
  int n, m;
  // cin >> n >> m;
  vector<vector<char>> arr = {{'G', 'H', 'I'}, {'P', 'R', 'S'}, {'D', 'E', 'F'}};
  vector<char> A = arr[0], ;
  printV(A);
  // printV(B);
  // rep(i, 0, 3) {
  //   rep(j, 0, 3) {
  //     rep(k, 0, 3) {
  //       rep(l, 0, 3) {
  //         cout << A[i] << B[j] << C[k] << A[l] << " ";
  //       }
  //     }
  //   }
  //   cout << '\n';
  // }



  // print all the possible combinations

  // print2V(v);
}

int main() {
  // ofstream fout ("");
  // ifstream fin ("");
  solve();
  return 0;
}
