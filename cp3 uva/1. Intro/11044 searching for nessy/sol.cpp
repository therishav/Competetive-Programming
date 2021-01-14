#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[])
{
  int t;
  cin >> t;
  while(t--) {
    int n, m;
    cin >> n >> m;
    cout << (n/3) * (m/3) << '\n';           // dividing a matrix into 3*3 subparts. to do that we do row/3 and col/3
  }
  return 0;
}
