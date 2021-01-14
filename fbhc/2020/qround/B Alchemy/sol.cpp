#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define print(a, b) cout << a << " : " << b << " | ";
#define nl cout << '\n';
#define rep(i, a, b) for (int i = a; i < b; i++)
#define printV(arr) for (auto i : arr) cout << i << " "; cout << '\n';

int c = 1;
void solve() {
  int n;
  string s;
  bool flag = true;
  cin >> n >> s;
  printf("Case #%d: ", c);

  for (int i = 0; i < n-1; i+=2) {
    print("1", s[i]);
    print("2", s[i+1]);
    print("3", s[i+2]);
    if (i != n-1) {
      map<char, int> mp;
      char a = s[i], b = s[i+1], c = s[i+2]; 
      if (a == b && b == c) {
	flag = false;
	goto end;
      }
      else {
	mp[a]++; mp[b]++; mp[c]++;
	auto it = mp.begin();
	it++;
	if (it->second == 2)
	  s[i+2] = b;
	else
	  s[i+2] = a;
      }
    }
  }
 end:
  cout << (flag ? 'Y' : 'N') << '\n';
}

int main() {
  int t;
  cin >> t;
  while (t--)
    solve();
}


