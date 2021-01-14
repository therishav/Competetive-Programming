#include<bits/stdc++.h>

using namespace std;

int main(void) {
  int w, p, temp;
  vector<int> l;
  vector<int> sol;
  
  cin >> w >> p;
  while(p--) {
    cin >> temp;
    l.push_back(temp);
    sol.push_back(temp);
  }
  l.push_back(w);
  sol.push_back(w);
  for(int i = 0; i < l.size(); i++) {
    for(int j = i+1; j < l.size(); j++) {
      temp = abs(l[i] - l[j]);
      sol.push_back(temp);
    }
  }

  // sorting the array
  sort(sol.begin(), sol.end());

  // using unique
  auto ip = unique(sol.begin(), sol.end());

  // resizing the vector to remove the undefined terms
  sol.resize(distance(sol.begin(), ip));
  
  for(auto i : sol)
    cout << i << " ";
  cout << '\n';
}
