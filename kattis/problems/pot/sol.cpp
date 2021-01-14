#include<bits/stdc++.h>
using namespace std;

int main(void) {
  int n, a, sum = 0, x;
  
  cin >> n;
  while(n--) {
    cin >> a;
    x = a%10;
    a /= 10;
    sum += pow(a, x);
  }
    cout << sum  << '\n';
}
