#include <bits/stdc++.h>
using namespace std;

#define print(a, b) cout << a << " : " << b << " | ";
#define nl cout << '\n';
#define rep(i, a, b) for (int i = a; i < b; i++)
#define printV(arr) for (auto i : arr) cout << i << " "; cout << '\n';

int main() {
  int r, p;
  while (cin >> r >> p) {
    cin.ignore();
    if ((r == 0) && (p == 0))
      break;

    vector<string> reqArr(r);
    rep(i, 0, r) 
      getline(cin, reqArr[i]);

    printV(reqArr);
  }
}
