#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[])
{
  while(true) {
    int initial, a, b, c;
    cin >> initial >> a >> b >> c;
    if (initial || a || b || c || 0) {
      cout << 1080 + (((initial - a + 40) % 40) + ((b - a + 40) % 40) + ((b - c + 40) % 40)) * 9  << '\n';
    }
    else {
      break;
    }
  }
  return 0;
}
