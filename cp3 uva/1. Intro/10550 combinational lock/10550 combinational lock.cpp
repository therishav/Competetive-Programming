#include <bits/stdc++.h>
using namespace std;

// void solve() {
//   int initial, a, b, c;
//   cin >> initial >> a >> b >> c;
//   if (initial || a || b || c)
//     cout << 1080 + 9*((40 - (initial - a)) + (40 - (a - b)) + (40 - (b - a)))  << "\n";
// }

int main(int argc, char *argv[])
{
  while(true) {
    int initial, a, b, c;
    cin >> initial >> a >> b >> c;
    if (initial || a || b || c) {
      int temp1, temp2, temp3;

      if ((initial == a) && (a == b) && (b == c)) {
        temp1 = temp2 = temp3 = 0;
      }
      else {
        (initial < a) ? temp1 = (40 + (initial - a)) : temp1 = initial - a;
        (a < b) ? temp2 = (b - a) : temp2 = 40 + (b - a);
        (b < c) ? temp3 = (40 + (b - c)) : temp3 = b - c;
        cout << temp1 << endl;
        cout << temp2 << endl;
        cout << temp3  << "\n";
      }
      cout << 1080 + 9*(temp1 + temp2 + temp3)  << "\n";
      }
    else {
      break;
    }
  }
  return 0;
}
