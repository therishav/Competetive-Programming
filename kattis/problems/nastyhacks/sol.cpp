#include<bits/stdc++.h>
using namespace std;

int main(void) {
  int n, r, e, c, exp;
  cin >> n;

  while(n--) {
    cin >> r >> e >> c;
    exp = e - c;

    if(exp > r)
      cout << "advertise" << '\n';
    else if(exp == r)
      cout << "does not matter" << '\n';
    else
      cout << "do not advertise" << '\n';
  }
}
