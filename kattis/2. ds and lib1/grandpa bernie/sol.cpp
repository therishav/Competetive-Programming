58#include<bits/stdc++.h>
using namespace std;

int main(void) {
  int n, q, y;
  string c;
  map<string, vector<int>> mp1;
  cin >> n;
  while(n--) {
    cin >> c >> y;
    mp1[c].push_back(y);
  }
  
  // prints the elements 
  // cout << "Elements in mp1 are\n"; 
  // cout << "KEY\tELEMENT\n"; 
  // for (auto itr = mp1.begin(); itr != mp1.end(); ++itr) { 
  //   cout << itr->first << '\t';
  //   for (auto itr2 = itr->second.begin(); itr2 != itr->second.end(); ++itr2) {
  //     cout << *itr2 << " ";
  //   }
  //   cout << '\n';
  // }

  for (auto it = mp1.begin(); it != mp1.end(); ++it) {
    sort(it->second.begin(), it->second.end());
  }
  
  cin >> q;
  while (q--) {
    cin >> c >> y;
    cout << mp1[c][y-1] << '\n';
  }
}
