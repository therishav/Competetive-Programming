#include<bits/stdc++.h>
using namespace std;

string pad(string s, int n) {
  n -= s.size();
  string tmp = ""; 
  while(n--) {
    tmp += '0';
    }
  tmp += s;
  return tmp;
}

int main(void) {
  string s1, s2;
  vector<int> sol;
  int a, b, carry = 0, temp;
  cin >> s1 >> s2;

  if(s2.size() > s1.size())
    s1 = pad(s1, s2.size());
  else if(s1.size() > s2.size())
    s2 = pad(s2, s1.size());
  
  for(int i = s1.size()-1; i >= 0; i--) {
    a = (int(s1[i]))-48;
    b = (int(s2[i]))-48;
    temp = a + b + carry;

    if(temp > 9) {
      carry = temp / 10;
      temp %= 10;
      sol.push_back(temp);
    }
    else {
      carry = 0;
      sol.push_back(temp);
    }
  }
  
  if(carry != 0)
    sol.push_back(carry);
  reverse(sol.begin(), sol.end());

  for(auto i : sol)
    cout << i;
  cout << '\n';
}
