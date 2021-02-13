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
  int n;
  cin >> n;
  vi arr;
  arr.push_back(n);

  for(int i = n-1; i > 0; i--) {
    if (n % i == 0) {
      bool incl = true;
      if (arr.size() != 0) {
        rep(j, 0, arr.size()) {
          if (arr[j] % i != 0) {
            incl = false;
            break;
          }
        }
      }
      if (incl)
        arr.push_back(i);
    }
  }
  sort(arr.begin(), arr.end(), greater<int>());
  printV(arr);
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
