#include<bits/stdc++.h>
using namespace std;
 
#define printArr(A) for(auto i : A) cout << i << " "; cout << '\n';
#define print(A) cout << " A: " << A << '\n';
typedef long long ll;
 
 
int main(void) {
  ll n, m, cow, sm = 1, temp;
  cin >> n >> m;
  set<ll> s;
  // printArr(arr);
  while (m--) {
    cin >> cow;
    s.insert(cow);
    
    if (sm < cow) 
      cout << sm;
    else if (sm == cow) {
      while (s.find(sm) != s.end()) 
	sm++;
      cout << sm;
    }
    cout << " ";
  }
  cout << '\n';
}
