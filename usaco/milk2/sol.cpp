/*
  ID: dzlvocp1
  TASK: milk2
  LANG: C++
*/
/* LANG can be C++11 or C++14 for those more recent releases */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<pair<int, int>> vii;
#define print(a) cout << a << '\n';
#define val(a, b) cout << a << " : " << b << " | ";
#define nl cout << '\n';
#define rep(i, a, b) for (int i = a; i < b; i++)
#define printV(arr) for (auto i : arr) cout << i << " "; cout << '\n';

void solve() {
  ofstream fout ("milk2.out");
  ifstream fin ("milk2.in");
  int n, a, b, mt, nmt = 0, temp;
  fin >> n;
  vii tm;
  for (int i = 0; i < n; i++) {
    fin >> a >> b;
    tm.push_back(make_pair(a, b));
  }
  // sort the list
  sort(tm.begin(), tm.end());
  // initializing first interval int a var
  ii ival = tm[0];
  mt = ival.second - ival.first; // assume their difference as longest mt till now
  // val(ival.first, ival.second); nl;
  for (int i = 1; i < n; i++) {

    // case 1; new interval makes the ival bigger
    if ((ival.second >= tm[i].first) && (ival.second < tm[i].second)) {
      ival.second = tm[i].second; // increase interval
      temp = ival.second - ival.first;
      if (temp > mt)
        mt = temp;
    }
    // case 2; new interval is exclusive of ival
    if (ival.second < tm[i].first) {
      temp = tm[i].first - ival.second; // time frame where now cows were milked
      if (temp > nmt)
        nmt = temp;
      ival = tm[i];
    }
    // case 3; where new interval is a subset of ival we do nothing!
    // print(i);
    // val(tm[i].first, tm[i].second);
    // val(ival.first, ival.second); nl;
  }
  fout << mt << " " << nmt << '\n';
  // for (auto i : tm)
  //    cout << i.first << " " << i.second << '\n';
}

int main() {

  solve();
  return 0;
}
