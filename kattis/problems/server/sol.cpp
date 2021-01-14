#include<bits/stdc++.h>

using namespace std;

int main(void) {
  int n, t, no = 0, task;
  cin >> n >> t;

  while(n--) {
    cin >> task;
    if(t < task) {
      break;
    }
    else {
      t -= task;
      no++;
    }
  }
  cout << no << '\n';
}
