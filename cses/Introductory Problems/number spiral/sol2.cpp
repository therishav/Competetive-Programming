#include<bits/stdc++.h>
using namespace std;

#define printA(A) for(auto i : A) cout << i << " "; cout << '\n';
typedef long long ll;
typedef unsigned long long ull;

void val(ull y, ull x) {
   ull sol;
   ll mx;
   bool ylarge;
   
   mx = max(y, x);
   if (mx % 2 == 0) {
     if (mx == y) cout << 
   }
     
}

int main(void) {
  ll t;
  ull y, x;			// y = rows, x = cols
  cin >> t;
  while (t--) {
    cin >> y >> x;
    if ((y == 1) && (x == 1))
      cout << 1 << '\n';  
    else
      val(y, x);
  }
}
