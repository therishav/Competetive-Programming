#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(void) {
  double r, c, a, b;
  cin >> r >> c;
  a = M_PI * r * r;
  b = M_PI * (r-c) * (r-c);
  cout << setprecision(6) << fixed;
  cout << (b / a) * 100 << '\n';
}
