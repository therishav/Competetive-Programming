#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(void) {
  int x, n, p, rem, avl;
  cin >> x >> n;
  rem = x;
  avl = x;
  while (n--) {
    cin >> p;
    rem = avl - p;
    avl = x + rem;
  }
  cout << avl << '\n';
  return 0;
}
