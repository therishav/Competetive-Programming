#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[])
{
  int t;
  cin >> t;
  while(t--) {
    int n, m;
    cin >> n >> m;
    if (n > m)
      cout << ">"  << "\n";
    else if (n < m)
      cout << "<"  << "\n";
    else
      cout << "="  << "\n";
  }
  return 0;
}
