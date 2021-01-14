#include <bits/stdc++.h>
#define INF (int) 1e9
using namespace std;

int main() {
  int r, n;
  cin >> r >> n;
  vector<int> arr(r+1, 1);

  for (int i = 0; i < n; i++) {
    int bkd;
    cin >> bkd;
    arr[bkd]--;
  }

  if (n == r)
    cout << "too late" << '\n';
  else {
    for (int i = 1; i <= r; i++) {
      if (arr[i] == 1) {
	cout << i << '\n';
	break;
      }
    }
  }
  return 0;
}
