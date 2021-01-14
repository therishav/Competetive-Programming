#include<bits/stdc++.h>
using namespace std;

#define printA(A) for(auto i : A) cout << i << " "; cout << '\n';
typedef long long ll;

int main(void) {
  int n;
  cin >> n;
  if (n == 1)
    cout << 1;
  else if (n <= 3)
    cout << "NO SOLUTION";
  else {
    for (int i = 2; i <= n; i+=2)
      cout << i << " ";
    for (int i = 1; i <= n; i+=2)
      cout << i << " ";
  }
  cout << '\n';
  return 0;
}
