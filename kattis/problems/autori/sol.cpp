#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  cout << s[0];
  for(int i = 1; i < s.size(); i++) {
    if(s[i] == '-') {
      cout << s[i+1];
      i++;
    }
  }
  cout << '\n';
}
