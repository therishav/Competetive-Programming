// Just return the max speed of all the scary cretures
// if the clown runs at the speed of the fastest kid who is trying of catch him,
// he will never be caught and the show will be thrilling enough for the audience.
#include <bits/stdc++.h>

using namespace std;

int main() {
  int t, n, a, max;
  cin >> t;
  for (int i = 1; i <= t; i++) {
    cin >> n;
    max = 1;
    while (n--) {
      cin >> a;
      if (a > max)
	max = a;
    }
    printf("Case %d: %d\n", i, max);
  }
}
  

