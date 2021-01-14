#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for (__typeof(a) i=(a); i<(b); ++i)
#define iter(it,c) for (__typeof((c).begin()) it = (c).begin(); it != (c).end(); ++it)

int main(void) {

  int n, q, k;
  cin >> n >> q;

  k = (int)sqrt(n)+2;
  vector<int> arr(n);
  vector<int> buck((n-1)/k + 1);

  rep(i, 0, q) {
    char op;
    cin >> op;
    if (op == 'F') {
      int x;
      cin >> x;
      x--;			// because 0 based indexing

      if (arr[x] == 0) {
	arr[x] = 1;
	buck[x/k]++;
      }
      else {
	arr[x] = 0;
	buck[x/k]--;
      }
    }
    else {
      int l, r;
      cin >> l >> r;
      l--; r--;

      // critical part of the code
      int sum = 0;
      rep(i, 0, buck.size()) {

	int a = k * i,
	  b = a + k-1;

	if (l <= a && b <= r)
	  sum += buck[i];
	else if (b < l || r < a)
	  ;
	else {
	  for (int j = max(l, a); j <= min(b, r); j++)
	    sum += arr[j];
	}
      }
      cout << sum << '\n';
    }
  }
  return 0;
}
