#include<bits/stdc++.h>
using namespace std;

#define printA(A) for(auto i : A) cout << i << " "; cout << '\n';
typedef long long ll;
typedef unsigned long long ull;

void val(ull y, ull x) {
   ull sol;
   bool ylarge;
   
   if (y > x)
     ylarge = true;
   else
     ylarge = false;
   
   (ylarge == true) ? sol = y * y : sol = x * x;
   // cout << "flag : " << ylarge << '\n';
    if (ylarge) {
      if (y % 2 == 0)
	sol -= (x - 1);
      else
	sol -= ((y - 1) + (y - x));
    }
    else {
      if (x % 2 == 0) {
	sol -= ((x - 1) + (x - y));
	// cout << "sol : " << sol << " x " << x << " y " << y << '\n';
      }
      else {
	y--;
	// cout << " sol: " << sol << " y: " << y << '\n';
	sol -= (y);
      }
    }
    cout << sol << '\n';
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
