#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(void) {
  int first = 1, second = 0, third = 0;
  string s;
  cin >> s;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == 'A')
      swap(first, second);
    else if (s[i] == 'B')
      swap(second, third);
    else
      swap(first, third);
  }

  if (first)
    cout << 1 << '\n';
  else if (second)
    cout << 2 << '\n';
  else
    cout << 3 << '\n';
  
  return 0;
}
