#include<bits/stdc++.h>
using namespace std;
     
int main(void) {
  int n;
  bool flag = false;
  cin >> n;
  if (n == 1)
    cout << "NO" << '\n';
  else {
    for (int i = 2; i < n; i+=2) {
      int temp = n - i;
      if (temp % 2 == 0) {
	flag = true;
	break;
      }
    }
    if (flag)
      cout << "YES" << '\n';
    else 
      cout << "NO" << '\n';
  }
  return 0;
}
