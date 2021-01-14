// this is the right solution
#include <bits/stdc++.h>

using namespace std;

int main() {

  int t, k, charVal, m;		//t test cases; m lines, each containing string; k = no of paid chars
  string s;
  char c;
  double ans, val, cents;
  vector<int> table(256, 0);	// DAT hash table
  
  cin >> t;
  while (t--) {
    
    cin >> k;			
    fill(table.begin(), table.end(), 0);
    ans = 0;
    
    while (k--) {
      cin >> c >> charVal;
      // cout << "char: " << c << " ascii val: " << int(c) << " charVal: " << charVal << '\n';
      table[int(c)] = charVal;
      // printf("int(c): %d, table[int(c)]: %d\n", int(c), table[int(c)]);

    }
    // printf("%.2f\n", ans);
    cin >> m;
    
    cin.ignore();
    while (m--) {
      s = "";
      
      getline(cin, s);
      // cout << s << '\n';
      
      for (int i = 0; i < s.size(); i++) {
	val = table[int(s[i])];

	if (val != 0) {
	  cents = (val / 100);
	  // printf("ans: %f, val: %f, cents: %.2f\n", ans, val, cents);
	  // cout << s[i];
	  ans = ans + cents;
	}
      }
      // cout << '\n';
    }
    // for (auto x : table)
    //   cout << x << " ";
    // cout << '\n';
    printf("%.2lf$\n", ans);
  }
}
