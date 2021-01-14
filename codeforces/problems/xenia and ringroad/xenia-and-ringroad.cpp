#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
  ll n, m, initial = 1, steps = 0, fin, ans = 0;
  cin >> n >> m;
  for(int i = 0; i < m; i++) {
    cin >> fin;
    if(initial <= fin) 
      steps += (fin - initial);
    else
      steps += (n - initial) + fin;
    cout << "steps: " << steps << '\n';
    initial = (initial + steps);
    cout << "initial: " << initial << '\n';
    ans += steps; 
    steps = 0;
  }
  cout << ans << '\n';
  

  // // print ans
  // for(auto x : arr)
  //   cout << x;
  // cout << '\n';
  return 0;
}
