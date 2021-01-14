/*
  ID: dzlvocp1
  TASK: transform
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

ofstream fout ("transform.out");
ifstream fin ("transform.in");

void in_matrix(vector<vector<char>> &arr) {
    rep(i, 0, arr.size()) {
        rep(j, 0, arr.size())
        fin >> arr[i][j];
        // arr[i][j].push_back(c);
    }

}

// transform 90 deg clockwise
vector<vector<char>> rotate(vector<vector<char>> matrix) {
    int n = matrix.size();
    vector<vector<char>> arr(n, vector<char> (n, 0));
    arr = matrix;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            swap(arr[i][j], arr[j][i]);
        }
    }

    for (int i = 0; i < n; i++) {
        reverse(arr[i].begin(), arr[i].end());
    }
    return arr;
}

// reflect horizontally and then subjected to one of the rotations (#1-#3).
vector<vector<char>> reflect(vector<vector<char>> matrix) {
    int n = matrix.size();
    vector<vector<char>> arr(n, vector<char> (n, 0));
    arr = matrix;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n/2; j++) {
          swap(arr[i][n-1-j], arr[i][j]);
        }
    }
    return arr;
}

void solve() {
  int n, ans = 7;
  fin >> n;
  vector<vector<char>> before(n, vector<char> (n, 0));
  vector<vector<char>> after(n, vector<char> (n, 0));

  // take input
  in_matrix(before); in_matrix(after);

  if (after == rotate(before))
    ans = 1;
  else if (after == rotate(rotate(before)))
    ans = 2;
  else if (after == rotate(rotate(rotate(before))))
    ans = 3;
  else if (after == reflect(before))
    ans = 4;
  else if ((after == rotate(reflect(before)))
           || (after == rotate(rotate(reflect(before))))
           || (after == rotate(rotate(rotate(reflect(before))))))
    ans = 5;
  else if (before == after)
    ans = 6;


  fout << ans << '\n';
}

int main() {
  // ofstream fout ("");
  // ifstream fin ("");
  solve();
  return 0;
}
