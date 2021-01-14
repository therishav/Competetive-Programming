#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(void) {
  ll n, sum, temp;
  cin >> n;
  sum = (n * (n+1))/2;
  n--;
  while (n--) {
    cin >> temp;
    sum -= temp;
  }
  cout << sum << '\n';
}
