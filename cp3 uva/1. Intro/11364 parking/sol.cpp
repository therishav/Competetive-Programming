#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[])
{
  int t;
  cin >> t;
  while(t--) {
    int n, shop, min = 99, max = 0;
    cin >> n;

    while(n--) {
      cin >> shop;

      if (min > shop)
        min = shop;             // new min
      if (max < shop)
        max = shop;             // new max
    }
    // cout << max << " " << min  << "\n";
    cout << 2*(max-min)  << "\n";

  }
  return 0;
}
