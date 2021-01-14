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
  ll n, k, temp, count = 0;
  cin >> n >> k;
  vector<ll> arr(n);

  for (int i = 0; i < n; i++) {
    cin >> temp;
    arr[i] = temp;
  }
  sort(arr.begin(), arr.end());
  ll i = 0, j = 0;
  while (i < n) {
    if (j < i)
      j = i;
    else if (j >= n)
      break;
    if (arr[j] - arr[i] >= k) {
      i++;
      count += n - j;
    }
    else
      j++;
  }
  // for (int i = 0; i < n-1; i++) {
  //   for (int j = i+1; j < n; j++ ) {
  //     if (abs(arr[i] - arr[j]) >= k)
  // 	count++;
  //   }
  // }
  cout << count << '\n';
}

int main() {
  // ofstream fout ("");
  // ifstream fin ("");
  solve();
}


