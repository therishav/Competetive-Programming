#include<bits/stdc++.h>
using namespace std;

#define printA(A) for(auto i : A) cout << i << " "; cout << '\n';
typedef long long ll;

int main(void) {
  ll n, sum;
  bool flag = true;
  vector<ll> ar1;
  vector<ll> ar2;
  cin >> n;
  sum = (n * (n+1)) / 2;
  // cout << "sum: " << sum << endl;
  if ((n <= 2) || (sum % 2 != 0))
    flag = false;

  else if (n % 2 != 0) {
    ll temp = sum / 2;
    for (ll i = n; i >= 1; i--) {
      if (i <= (temp)) {
	temp -= i;
	ar1.push_back(i);
      }
      else
	ar2.push_back(i);
    }
  }
  else {
    for (ll i = 1; i <= n/2; i+=2) {
      ll j = i+1;
      ar1.push_back(i);
      ar2.push_back(j);
    }
    for (ll i = (n/2)+1; i <= n; i+=2) {
      ll j = i+1;
      ar1.push_back(j);
      ar2.push_back(i);
    }
  }
  if (flag) {
    cout << "YES" << '\n' << ar1.size() << '\n';
    printA(ar1);
    cout << ar2.size() << '\n';
    printA(ar2);
  }
  else
    cout << "NO" << '\n';
  
  return 0;
}
