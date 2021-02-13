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
typedef vector<int> vi;

#define print(a) cout << a << '\n';
#define val(a, b) cout << a << " : " << b << " | ";
#define nl cout << '\n';
#define rep(i, a, b) for (int i = a; i < b; i++)
#define printV(arr) for (auto i : arr) cout << i << " "; cout << '\n';
#define print2V(arr) for (auto i : arr) { for (auto j : i) cout << j << " "; cout << '\n'; }

string digisum(string s) {
  ll sum = 0;

  stringstream ss;
  rep(i, 0, s.size()) {
    ss << s[i];
    int tmp;
    ss >> tmp;
    sum += tmp;
    ss.clear();
  }
  ss << sum;
  ss >> s;
  return s;
}

void solve() {
  int count = 0;
  string s;
  cin >> s;
  if (s.size() == 1)
    cout << count << '\n';
  else {
    while (s.size() != 1) {
      count++;
      s = digisum(s);
    }
    cout << count << '\n';
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
