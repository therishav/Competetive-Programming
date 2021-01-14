#include<bits/stdc++.h>
using namespace std;

int main(void) {

  int n;
  char c;
      
  cin >> n;
  cin >> c;
  
  while(n--) {
    int total = 0;
    string s;
    map<string, int> mp;

    while ((cin >> s) && (s != "")) {
      total++;
      auto it = mp.find(s);
      if (it == mp.end())
	mp.insert(make_pair(s, 1));
      else
	it->second++;
      // cout << s << '\n';
    }
    
    for (auto it : mp) {
      float temp = it.second;
      temp = (temp/total) * 100;
      cout << it.first << " " << it.second << '\n';
    }
    cout << '\n';
  }
}
