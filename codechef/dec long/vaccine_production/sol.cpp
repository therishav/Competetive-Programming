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
  
}

int main() {
  // ofstream fout ("");
  // ifstream fin ("");
  int no = 0, d1, d2, v1, v2, p, d = 1;
  cin >> d1 >> v1 >> d2 >> v2 >> p;
  while (no < p) {
    if (d >= d1)
      no += v1;
    if (d >= d2)
      no += v2;
    d++;
    // print(d, no);
  }
  d -= 1;
  cout << d << '\n';
}


