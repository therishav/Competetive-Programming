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
#define print(a) cout << a << '\n';
#define val(a, b) cout << a << " : " << b << " | ";
#define nl cout << '\n';
#define rep(i, a, b) for (int i = a; i < b; i++)
#define printV(arr) for (auto i : arr) cout << i << " "; cout << '\n';

void solve() {
  int aval = 0, bval = 0;
  bool flag = true;
  string a, b;
  cin >> a >> b;
  transform(a.begin(), a.end(), a.begin(), ::tolower);
  transform(b.begin(), b.end(), b.begin(), ::tolower);
  for (int i = 0; i < a.size(); i++) {
    int aval = (int(a[i]) - 96);
    int bval = (int(b[i]) - 96);
    if (aval < bval) {
      print(-1);
      flag = false;
      break;
    }
    else if (aval > bval) {
      print(1);
      flag = false;
      break;
    }
  }
  if (flag) 
    cout << 0 << '\n';
  // print(int(a[0])-65);
  // print(int(a[1])-65);
  
}

int main() {
  // ofstream fout ("");
  // ifstream fin ("");
  solve();
  return 0;
}


