#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define print(a, b) cout << a << " : " << b << " | ";
#define nl cout << '\n';
#define rep(i, a, b) for (int i = a; i < b; i++)
#define printV(arr) for (auto i : arr) cout << i << " "; cout << '\n';

void read(vector<int> &arr) {
  int temp;
  while (true) {
    cin >> temp;
    if (temp == -1)
      break;
    arr.push_back(temp);
  }
}

int main() {
  int n, c, temp;
  vector<int> on, off;
  
  cin >> n >> c;
  read(on); read(off); 		// on/off vector has all the bulbs which are on/off in the final state.

  // party starts, setting all the lamps to 1(all of them are turned on).
  vector<bool> lamps(n, 1);	// we have c button presses, also given final states

  while (c--) {
    // for each button press, check if each of 4 buttons could be pressed or not.
    for (int i = 1; i <= 4; i++) {
      if (i == 1) {		// bt 1 is pressed.
	
      }
    }
  }
  printV(on);

}


