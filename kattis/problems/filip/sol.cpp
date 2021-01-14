#include <bits/stdc++.h>
using namespace std;

// reverse a 3digit no
int reverse(int a) {
  int ans = 0;
  for(int i = 2; i >= 0; i--) {
    ans += (a%10) * pow(10, i);
    a /= 10;
  }
  return ans;
}

int main() {
  int a, b;
  cin >> a >> b;
  // a = reverse(a); b = reverse(b);
  a = reverse(a); b = reverse(b);
  (a > b) ?   cout << a << '\n' : cout << b << '\n';
}
