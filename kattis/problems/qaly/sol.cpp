#include<bits/stdc++.h>
using namespace std;

int main(void) {
  int n;
  double a, b, sum = 0;
  cin >> n;
  while(n--) {
    cin >> a >> b;
    sum += a * b;
  }
  cout << sum << '\n';
}