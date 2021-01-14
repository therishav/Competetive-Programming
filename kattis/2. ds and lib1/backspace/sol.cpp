#include<bits/stdc++.h>
using namespace std;

int main(void) {
  string str, s="";
  cin >> str;

  s.push_back(str[0]);
  for(int i = 1; i < str.size(); i++) {
    if(str[i] == '<') 
      s.pop_back();
    else {
      s.push_back(str[i]);
    }
  }
  cout << s << '\n';
}
