#include<bits/stdc++.h>
using namespace std;

int main(void) {

  int t, n;
  string s;
  cin >> t;
  
  while (t--) {
    cin >> n;
    cin >> s;
    int a = 0, b = 0, num = 0, m;
    bool flag = false;
    for (int i = 0; i < s.size()-1; i++) {
      int j = i+1;
      if (s[i] == '1')
	a++;
      if (s[j] == '1')
	b++;
      
      m = max(a, b);
      cout << m << '\n';
      if (m >= n) {
	cout << "n " << n << '\n';
	i += 2;
	j += 2;
	if (a > b)
	  cout << i << '\n';
	else
	  cout << j << '\n';
	flag = true;
	break;
      }
    }
    if (!flag)
      cout << 2*n << '\n';
  }
}
