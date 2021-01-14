#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(void) {
  ll n, m;
  char c;
  set<ll> st;
  cin >> n >> m;
  
  while (m--) {
    cin >> c >> n;
    if (c == '+') 
      st.insert(n);
    else if (c == '-') 
      st.erase(n);
    else if (c == '?') {
      if (st.find(n) == st.end())
	cout << "QAQ" << '\n';
      else
	cout << "10-4" << '\n';  
    }
  }
}
