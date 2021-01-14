#include <bits/stdc++.h>

using namespace std;

int main() {
  long long n, s, d, x, y;
  cin >> n;

  while (n--) {
    cin >> s >> d;
    x = (s + d) / 2;
    y = s - x;

    if (((x + y) != s) || (abs(x-y) != d) || (y < 0))
      cout << "impossible" << '\n';
    else
      cout << max(x, y) << " " << min(x, y) << '\n';
    // cout << "abs: " << abs(-1234);
  }
}

  
