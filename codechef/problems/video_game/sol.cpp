/*
  ID: dzlvocp1
  TASK: 
  LANG: C++                 
*/
/* LANG can be C++11 or C++14 for those more recent releases */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<pair<int, int>> vii;
#define print(a, b) cout << a << " : " << b << " | ";
#define nl cout << '\n';
#define rep(i, a, b) for (int i = a; i < b; i++)
#define printV(arr) for (auto i : arr) cout << i << " "; cout << '\n';

void solve() {
  
}
int main() {
  // ofstream fout ("");
  // ifstream fin ("");
  int n, h, temp, cmd;
  ii pos(1, 0);
  // print(pos.first, pos.second);
  cin >> n >> h;
  vector<int> arr(n+1);
  for (int i = 1; i <= n; i++) {
    cin >> temp;
    arr[i] = temp;
  }

  while(true) {
    cin >> cmd;
    if (cmd == 0)
      break;
    else if (cmd == 1) {			// move 1 position left
      if (pos.first > 1)
	pos.first--;
    }
    else if (cmd == 2) {			// move 1 position right
      if (pos.first != n)
	pos.first++;
    }
    else if (cmd == 3) {			// pick up a box
      if ((pos.second != 1) && (arr[pos.first] > 0)) {
	pos.second = 1;
	arr[pos.first] -= 1;
      }
    }
    else if (cmd == 4) {			// drop a box
      int t = arr[pos.first] + 1;
      if ((pos.second != 0) && (t <= h)) {
	pos.second = 0;
	arr[pos.first] += 1;
      }
    }
  }
  rep(i, 1, n+1)
    cout << arr[i] << " ";
  cout << '\n';
  return 0;
}


