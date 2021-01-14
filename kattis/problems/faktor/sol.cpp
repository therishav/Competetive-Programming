#include<bits/stdc++.h>
using namespace std;

int main() {
  double a, i, sci=1;
  cin >> a >> i;
  while(true) {
    if(a == 1) {
      cout << i << '\n';
      break;
    }
    else if((sci / a) > i-1) {
      cout << sci << '\n';
      break;
    }
    sci++;
  }
  return 0;
}
