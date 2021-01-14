#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int n, temp, count = 0, i = 0;
  cin >> n;
  while(i < n) {
    cin >> temp;
    if (temp < 0)
      count++;
    i++;
  }
  cout << count << '\n';
  return 0;
}
