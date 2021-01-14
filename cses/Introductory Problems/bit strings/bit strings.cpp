#include<bits/stdc++.h>

#define M 1000000007

using namespace std;

typedef long long ll;

ll binpow(ll a, ll b) {

  a %= M;
  ll res = 1;
  while (b > 0) {
    if (b&1) 
      res = res * a % M;
    a = a * a % M;
    b >>= 1;
  }
  return res;
}

int main(void) {
  ll a = 2, b;
  cin >> b;
  cout << binpow(a, b) << '\n';

  return 0;
}
