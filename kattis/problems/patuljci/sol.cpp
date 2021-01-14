#include <bits/stdc++.h>
#define INF (int) 1e9
using namespace std;

int main() {
  int n, sum = 0;
  vector<int> arr;
  for (int i = 0; i < 9; i++) {
    cin >> n;
    arr.push_back(n);
    sum += n;
  }

  // check for two such hat no's which makes the sum  100
  int i, j;
  for (i = 0; i < 9; i++) {
    for (j = i+1; j < 9; j++) {
      if (sum - arr[i] - arr[j] == 100)
	goto end;
    }
  }

 end:
  for (int x = 0; x < 9; x++) {
    if ((x != i) && (x != j))
      cout << arr[x] << '\n';
  }
  return 0;
}
