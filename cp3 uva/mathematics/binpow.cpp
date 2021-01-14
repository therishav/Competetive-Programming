#include <bits/stdc++.h>

using namespace std;
#define ll long long

// ll binpow(ll x, ll n) {
//   ll result = 1;
//   while(n > 0) {
//     if(n & 1)			// if b is odd
//       result = result * x;
//     x = x * x;
//     n >>= 1;
//   }
//   return result;
// }

ll binpow(ll x, ll n, ll m) {
  x %= m;
  ll result = 1;
  while(n > 0) {
    if(n & 1)
      result = (result * x) % m;
    x = (x * x) % m;
    n >>= 1;
  }
  return result;
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    ll x, y, n;
    cin >> x >> y >> n;
    cout << binpow(x, y, n) << '\n';
  }
  cin >> t;
  return t;
}
