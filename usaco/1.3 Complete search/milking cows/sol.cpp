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
#define print(a, b) cout << a << " : " << b << " | ";
#define nl cout << '\n';
#define rep(i, a, b) for (int i = a; i < b; i++)
#define printV(arr) for (auto i : arr) cout << i << " "; cout << '\n';

void solve() {
  
}

int main() {
  ofstream fout ("milk2.out");
  ifstream fin ("milk2.in");

  int n, a, b;
  vii arr;
  fin >> n;
  for (int i = 0; i < n; i++) {
    fin >> a >> b;
    arr.push_back(make_pair(a, b));
  }
  sort(arr.begin(), arr.end());

  int total, min = 0, max = 0;
  for (auto i = arr.begin(); i < arr.end()-1; i++) {
    total = 0;
    for (auto j = i+1; j < arr.end(); j++) {
      print("i first", i->first); print("i second", i->second);
      print("j first", j->first); print("j second", j->second);
      nl;
      if (j->first <= i->second) {  // they are in same interval
      	if (j->second <= i->second)
      	  total += (i->second - i->first);
      	else
      	  total += (i->second - i->first) + (j->second - i->second);
      }
      if (total > max)
      	max = total;
    }
  }
  print("max", max); nl; 
}


