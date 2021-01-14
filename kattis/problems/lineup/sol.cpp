#include <bits/stdc++.h>
#define INF (int) 1e9
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<string> arr, arr2;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    arr.push_back(s);
    arr2.push_back(s);

  }
  sort(arr2.begin(), arr2.end());
  if (arr == arr2)
    cout << "INCREASING" << '\n';
  else {
    reverse(arr2.begin(), arr2.end());
    if (arr == arr2)
      cout << "DECREASING" << '\n';
    else
      cout << "NEITHER" << '\n';
  }
  return 0;
}
