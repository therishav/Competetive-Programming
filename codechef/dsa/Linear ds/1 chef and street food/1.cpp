#include <bits/stdc++.h>
using namespace std;

int main () {

  int t;
  cin >> t;
  while (t--) {
    int n, maxProf = 0;
    cin >> n;
    while (n--) {
      int s, p, v, profit = 0;              // s no of store, v = price of ith item, p = no of people comming to buy it

      cin >> s >> p >> v;

      profit = v * (p/(s+1));
      maxProf = max(profit, maxProf);

    }

    cout << maxProf << '\n';
  }
  return 0;
}
