#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(void) {
  int h, m;
  cin >> h >> m;
  if (m < 45) {
    if (h == 0)
      h = 23;
    else
      h--;
    m += 60;
  }
  cout << h << " " << m-45 << '\n';
}
