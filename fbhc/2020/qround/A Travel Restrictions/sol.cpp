#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define print(a, b) cout << a << " : " << b << " | ";
#define nl cout << '\n';
#define rep(i, a, b) for (int i = a; i < b; i++)
#define printV(arr) for (auto i : arr) cout << i << " "; cout << '\n';
#define print2DV(arr) for (auto i : arr) { for (auto j : i) cout << j;  cout << '\n'; }

int c = 1;
void solve() {
  printf("Case #%d:\n", c);
  int n;
  string I, O;
  cin >> n >> I >> O;
  // print("No of service countries", n);
  // print("In-commig restrictions", I);
  // print("Out-going restrictions", O);
  // nl;
  for (int country = 0; country < n; country++) {
    vector<bool> vis(n);
    vis[country] = true;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
	if (vis[j]) {
	  if (O[j] == 'Y') {
	    if (j && I[j-1] == 'Y')
	      vis[j-1] = true;
	    if (j < n-1 && I[j+1] == 'Y')
	      vis[j+1] = true;
	  }
	}
      }
    }
    
    for (int j = 0; j < n; j++)
      cout << (vis[j] ? 'Y' : 'N');
    cout << '\n';
  }
  c++;
}

int main() {
  int t, c = 1;
  cin >> t;
  while (t--) 
    solve();
}


