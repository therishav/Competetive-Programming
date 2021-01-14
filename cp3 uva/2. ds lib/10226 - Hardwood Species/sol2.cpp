#include<bits/stdc++.h>
using namespace std;

int main(void) {

  cout << setprecision(4) << fixed;
  int n;
  string c;
  cin >> n;
  getline(cin,c);
  getline(cin,c);

  while (n--) {
    int total = 0;
    string s;
    map<string, int> mp;
  
    while (true) {
      getline(cin, s);
      if (s == "")
	break;
      mp[s]++;
      total++;
      // cout << s << '\n';
    }
    for (auto it : mp) {
      float temp = it.second;
      temp = (temp/total) * 100;
      cout << it.first << " " << temp << '\n';
    }
    if (n != 0)
      cout << '\n';
  }
}


