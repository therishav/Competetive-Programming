#include<bits/stdc++.h>
using namespace std;

int main(void) {
  int n, m;
  cin >> n >> m;

  if (n == m)
    cout << n+1 << '\n';
  else if (n < m) {
    for (int i = n+1; i <= m+1; i++)
      cout << i << '\n';
  }
  else {
    for (int i = m+1; i <= n+1; i++)
      cout << i << '\n';
  }
  return 0;
}
