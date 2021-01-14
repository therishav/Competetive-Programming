/*
  ID: dzlvocp1
  TASK: 
  LANG: C++                 
*/
/* LANG can be C++11 or C++14 for those more recent releases */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<pair<int, int>> vii;
#define print(a, b) cout << a << " : " << b << " | ";
#define nl cout << '\n';
#define rep(i, a, b) for (int i = a; i < b; i++)
#define printV(arr) for (auto i : arr) cout << i << " "; cout << '\n';

void solve() {
  int n, d, temp, rno = 0, nno = 0, days = 0;
  cin >> n >> d;
  // vector<int> arr(n);
  rep(i, 0, n) {
    cin >> temp;
    if ((temp >= 80) || (temp <= 9))
      rno++;
    else
      nno++;
  }

  if (d == 1)
    cout << n << '\n';
  else {
    // first giving vaccines to people who are at risk
    if (rno % d == 0)
      days += rno/d;
    else
      days += floor(rno/d) + 1;

    // giving vaccines to people who are at low risk
    if (nno % d == 0)
      days += nno/d;
    else
      days += floor(nno/d) + 1;
    
    cout << days << '\n';
  }
  // print(rno, nno); nl;

}

int main() {
  // ofstream fout ("");
  // ifstream fin ("");
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}


