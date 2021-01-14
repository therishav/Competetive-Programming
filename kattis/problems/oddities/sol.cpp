#include<bits/stdc++.h>
using namespace std;

int main(void) {
  int n, a;
  cin >> n;

  while(n--) {
    cin >> a;
    if(a%2 == 0)
      cout << a << " is even" << '\n';
    else
      cout << a << " is odd" << '\n';
  }
}
