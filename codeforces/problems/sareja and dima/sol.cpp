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
  int n, s = 0, d = 0, temp;
  bool flag = 1;
  cin >> n;
  vector<int> arr(n+1);
  for (int i = 1; i <= n; i++) {
    cin >> temp;
    arr[i] = temp;
  }
  int l = 1, r = n;
  while (l <= r) {
    int m;
    if (arr[l] > arr[r]) {
      m = arr[l];
      l++;
    }
    else if (arr[l] < arr[r]) {
      m = arr[r];
      r--;
    }
    else {
      m = arr[l];
      l++;
    }
    
    // print(m);
    if (flag) {			// sareja's turn;
      s += m;
      flag = 0;
    }
    else {			// dima's turn;
      d += m;
      flag = 1;
    }
  }
  cout << s << " " << d << '\n';
}

int main() {
  // ofstream fout ("");
  // ifstream fin ("");
  solve();
  return 0;
}

