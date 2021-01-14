#include<bits/stdc++.h>
using namespace std;

int main(void) {
  int n, h, v, a, b;
  
  cin >> n >> h >> v;
  a = max(v*h*4, v*(n-h)*4);
  b = max((n-v)*h*4, (n-v)*(n-h)*4);
  cout << max(a, b)  << '\n';
}
