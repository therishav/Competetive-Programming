#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define print(a, b) cout << a << " : " << b << " | ";
#define nl cout << '\n';
#define rep(i, a, b) for (int i = a; i < b; i++)
#define printV(arr) for (auto i : arr) cout << i << " "; cout << '\n';

ll cycle_len(ll n) {
  ll cycle = 1;
  while (n != 1) {

    if (n % 2 != 0)
      n = n * 3 + 1;
    else
      n = n / 2;
    cycle++;
  }
  return cycle;
}



int main() {
  // you have to find biggest cycle length over all number between and including i and j
  ll i, j;
  while (cin >> i >> j) {
    ll max = -1;
    cout << i << " " << j << " ";
    if (j < i)
      swap(i, j);

    for (ll x = i; x <= j; x++) {
      ll c = cycle_len(x);
      // cout << "i: " << i << " ";
      // print("max: ", max); 
      if (max < c)
	max = c;
      // nl
    }
    cout << max << '\n';
  }
}


