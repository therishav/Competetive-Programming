#include <bits/stdc++.h>
using namespace std;

#define print(a, b) cout << a << " : " << b << " | ";
#define nl cout << '\n';

int main() {
  double h, u, d, f;
  while (cin >> h >> u >> d >> f) {
    if (h == 0)
      break;
    
    int day = 1;
    double climbed = 0, in_u = u;
    while (true) {
      // print("day", day);

      // print("initial height", climbed);
      // print("distance climbed", u);
      // snail climbs during day 
      if (u > 0)
	climbed += u;
      // print("after climbing", climbed);

      if (climbed > h) {
	cout << "success on day " << day << '\n';
	break;
      }
      
      // snail slides during night
      climbed -= d;
      // print("height after sliding", climbed);

      if (climbed < 0) {
	cout << "failure on day " << day << '\n';
	break;
      }
      
      // u decreased due to fatigue factor
      u -= (in_u * (f/100));
      day++; 			// increment day
      // nl
    }
  }
}
