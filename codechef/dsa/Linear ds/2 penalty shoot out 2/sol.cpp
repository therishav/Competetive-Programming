#include<bits/stdc++.h>
using namespace std;

int main(void) {

  int t, n;
  string s;
  cin >> t;
  
  while (t--) {
    cin >> n;
    cin >> s;
    int a = 0, b = 0, num = 0, m, x, aL, bL;

    if (n == 1)
      cout << 2 << '\n';
    else {
      aL = n; bL = n;
      for (int i = 0; i < s.size(); i++) {
	if (i % 2 == 0) {
	  if (s[i] == '1') 
	    a++;
	  aL--;
	}
	else {
	  if (s[i] == '1') 
	    b++;
	  bL--;
	}
	// cout << "a: " << a << '\n';
	// cout << "b: " << b << '\n';
	if ((a > b + bL) || (b > a + aL))  {
	  cout << i + 1 << '\n';
	  break;
	}
	else if ((a == b) && (i == 2*n -1)) {
	  cout << 2*n << '\n';
	  break;
	}
      }
    }
  }
}
