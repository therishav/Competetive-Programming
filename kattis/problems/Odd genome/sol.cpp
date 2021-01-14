#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;
    vector<int> gnome(n+1);
    for(int i = 1; i <= n; i++) {
      int x;
      cin >> x;
      gnome[i] = x;
    }
    for(int i = 1; i <= n; i++) {
      int diff = gnome[i] - gnome[i+1];
      if(!(diff  == -1)) {
      	cout << i+1 << '\n';
      	break;
      }
      // cout << gnome[i] - gnome[i+1] << " ";
      // cout << gnome[i]
    }
  }
  return 0;
}
