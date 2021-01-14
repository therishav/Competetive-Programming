#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {

  int t, d0, d1;
  ll k;
  cin >> t;
  while (t--) {
    cin >> k >> d0 >> d1;
    int s = d0 + d1;
    ll c = ((2*s) % 10) + ((4*s) % 10) + ((8*s) % 10) + ((6*s) % 10);
    // s = 7, 4 + 8 + 6 + 2 = 20
    // c = 20
    // 3 4 7 4 8  3+4+7+4+8 = 26

    ll no_of_cycles = (k-3) / 4;
    // 0


    ll ans = 0;
    // 2
    if (k == 2) {
      ans = s;
    }
    else {
      ans = (s + (s % 10)) + (c * no_of_cycles);
      int leftover = ((k-3) - (4 * no_of_cycles));
      // 7 + 7 = 14
      // cout << " ans = " << ans << '\n'; // correct!

      int p  = 2;
      for (int i = 1; i <= leftover; i++) {
        ans += (p * s) % 10;
        p = (p * 2) % 10;
      }
    }

    // 14 + 14 = 28
    // cout << "s = " << s << " c =  " << c  << " no of cycles = " << no_of_cycles << " leftover = " << leftover  << " ans = " <<  an
      // s << '\n';
     ((ans % 3) == 0) ? cout << "YES" << '\n' : cout << "NO"  << "\n";
  }

  // naive approach
  // int t, d0, d1;
  // long long int k;
  // cin >> t;
  // while (t) {
  //   cin >> k >> d0 >> d1;

  //   int a = d0 + d1;
  //   long long int sum = 0, d_prev = a % 10, d;
  //   for (long long int i = 3; i < k; ++i) {
  //     d = (a + d_prev) % 10;
  //     sum += d;
  //     d_prev = d;
  //   }
  //   ((sum % 3) == 0) ? cout << "YES" << '\n' : cout << "NO"  << "\n";
  //   t--;
  // }
  // return 0;
}
