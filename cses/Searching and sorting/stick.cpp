#include<bits/stdc++.h>
using namespace std;

#define printA(A) for(auto i : A) cout << i << " "; cout << '\n';
#define print(A) cout << A << '\n';
typedef long long ll;

ll n, k;

int main(void) {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  if (n % 2 == 0) {
    ll x = n / 4;
    if (n % 4 == 0)
      cout << x-1 << '\n';
    else
      cout << x << '\n';
  }
  else
    cout << 0 << '\n';
}
