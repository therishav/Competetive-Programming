// if a > x then east else if a < x then west else divisia
// if b > y then north; else if b < y then south else divisia

#include <bits/stdc++.h>

using namespace std;

int main() {
  int t, x, y, a, b;
  while (1) {
    cin >> t;
    if (t != 0) {
      cin >> x >> y;
      while(t--) {
	cin >> a >> b;

	if ((a == x) || (b == y))
	  cout << "divisa" << '\n';
	else if ((a < x) && (b > y))
	  cout << "NO" << '\n';
	else if ((a > x) && (b > y))
	  cout << "NE" << '\n';
	else if ((a > x) && (b < y))
	  cout << "SE" << '\n';
	else if ((a < x) && (b < y))
	  cout << "SO" << '\n';
      }
    }
    else
      break;
  }
}
  

