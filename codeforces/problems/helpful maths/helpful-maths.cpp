#include <bits/stdc++.h>
using namespace std;

int main() {
  string a;
  cin >> a;
  
  // char b[a.size()];
  int i = 0;
  vector<char> b;
  
  if (a.size() == 1)
    cout << a << '\n';
  else {
    while(i <= a.size()) {
      b.push_back(a[i]);
      i += 2;
    }
    sort(b.begin(), b.end());
    // b.insert(b.begin()+1, '+');
    i = 1;
    // insert + at a position odd i
    while(i < a.size()) {
      b.insert(b.begin()+i, '+');
      // b[i] = '+';
      i += 2;
    }
    // print ans
    for(auto x : b)
      cout << x;
    cout << '\n';

    // cout << b << '\n';
  }

  return 0;
}
