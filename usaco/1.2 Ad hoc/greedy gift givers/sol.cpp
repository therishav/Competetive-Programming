/*
  ID: dzlvocp1
  TASK: gift1
  LANG: C++                 
*/
/* LANG can be C++11 or C++14 for those more recent releases */
#include <bits/stdc++.h>
using namespace std;

#define FOR(i, n) for(int i = 0; i < n; i++)

int main() {
  ofstream fout ("gift1.out");
  ifstream fin ("gift1.in");
    
  map<string, int> mp;
  vector<string> vect;
  string s;
  int n, amt, n1;

  fin >> n;
  for (int i = 0; i < n; i++) {
    fin >> s;
    vect.push_back(s);
    mp[s] = 0;
  }

  for (int i = 0; i < n; i++) {
    int temp = 0, rem = 0;
    fin >> s;
    fin >> amt >> n1;

    if (n1 != 0) {
      temp = amt / n1;
      rem = amt % n1;
    }
    mp[s] = (mp[s] - amt) + rem;
    while (n1--) {
      fin >> s;
      mp[s] += temp;
    }
  }
  for (auto i : vect)
    fout << i << " " << mp[i] << '\n';

  return 0;
}
