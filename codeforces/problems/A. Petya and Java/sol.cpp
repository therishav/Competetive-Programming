/*
  ID: dzlvocp1
  TASK:
  LANG: C++
*/
/* LANG can be C++11 or C++14 for those more recent releases */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> ii;
typedef vector<pair<int, int>> vii;
typedef vector<int> vi;

#define print(a) cout << a << '\n';
#define val(a, b) cout << a << " : " << b << " | ";
#define nl cout << '\n';
#define rep(i, a, b) for (int i = a; i < b; i++)
#define printV(arr) for (auto i : arr) cout << i << " "; cout << '\n';
#define print2V(arr) for (auto i : arr) { for (auto j : i) cout << j << " "; cout << '\n'; }

void solve() {
  string s = "9223372036854775807", s2 = "";
  // val("x", s.size()); nl;

  cin >> s;
  bool neg = false, byte = false, sht = false, it = false, lg = false;

  if ((s.size() > 19) && (s[0] != '-')) {
    cout << "BigInteger" << '\n';
  }
  else {
    if (s[0] == '-') {
      rep(i, 1, s.size())
        s2 += s[i];
      s = s2;
      neg = true;
    }
    stringstream ss;
    ss << s;
    ull a;
    ss >> a;
    if (neg) {
      if (a <= 128)
        byte = true;
      else if (a <= 32768)
        sht = true;
      else if (a <= 2147483648)
        it = true;
      else if (a <= 9223372036854775808)
        lg = true;
    }
    else {
      if (a <= 127)
        byte = true;
      else if (a <= 32767)
        sht = true;
      else if (a <= 2147483647)
        it = true;
      else if (a <= 9223372036854775807)
        lg = true;
    }
    if (byte)
      cout << "byte" << '\n';
    else if (sht)
      cout << "short" << '\n';
    else if (it)
      cout << "int" << '\n';
    else if (lg)
      cout << "long" << '\n';
    else
      cout << "BigInteger" << '\n';
  }
}

int main() {
  // ofstream fout ("");
  // ifstream fin ("");
  // int t;
  // cin >> t;
  // while (t--)
  solve();
  return 0;
}
