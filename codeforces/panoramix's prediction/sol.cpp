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

bool isPrime(int n) {
  if (n <= 1)
    return true;

  // check from 2 to n-1
  for (int i = 2; i < n; i++) {
    if (n % i == 0)
      return false;
  }
  return true;
}

void solve() {
  int n, m, next_prime;
  cin >> n >> m;
  next_prime = n+1;
  while (true) {
    if (isPrime(next_prime))
      break;
    next_prime++;
  }
  if (next_prime == m)
    cout << "YES" << '\n';
  else
    cout << "NO" << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  // ofstream fout ("");
  // ifstream fin ("");
  solve();
  return 0;
}
