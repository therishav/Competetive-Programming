#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  while (cin >> n) {
    if (n == 0)
      break;
    for (int fghij = 1234; fghij <= 98765; fghij++) {
      int abcde = fghij * n;
      int temp, used = abcde < 10000;
      temp = abcde;
      while (temp) {
	used = 1 << (temp % 10);
	temp /= 10;
      }
      temp = fghij;
      while (temp) {
	used = 1 << (temp % 10);
	temp /= 10;
      }
      if (used == (1 << 10) - 1)
	printf("%d / %d = %d\n", abcde, fghij, n);

    }
    printf("There are no solutions for %d.\n", n);
  }
  return 0;
}
