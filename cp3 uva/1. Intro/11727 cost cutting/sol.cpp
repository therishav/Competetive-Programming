#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[])
{
  int t, a, b, c, survivor;
  cin >> t;
  for (int i = 1; i <= t; i++) {
    cin >> a >> b >> c;
    if (((a > b) && (a < c)) || ((a < b) && (a > c)))
      survivor = a;
    else if (((b > a) && (b < c)) || ((b < a) && (b > c)))
      survivor = b;
    else
      survivor = c;

    cout << "Case " << i << ": " << survivor << '\n';
  }
  return 0;
}
