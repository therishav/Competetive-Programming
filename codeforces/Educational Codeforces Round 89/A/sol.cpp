#include <bits/stdc++.h>

using namespace std;

int main() {

  int t, a, b, ans, x;

  cin >> t;
  while (t--) {
    cin >> a >> b; 		// a = sticks and b = diamonds.
    
    if ((a == 0) || (b == 0))
      cout << 0 << '\n';
    else {
      ans = (a+b) / 3;

      if (ans < min(a, b))
	cout << ans << '\n';
      else
      cout << min(a, b) << '\n';
    }
  }
  return 0;
}

