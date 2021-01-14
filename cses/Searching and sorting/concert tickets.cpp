#include<bits/stdc++.h>
using namespace std;

#define printArr(A) for(auto i : A) cout << i << " "; cout << '\n';
typedef long long ll;

int n, m, h;
multiset<int> arr;

int main(void) {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> m;
  while (n--) {
    cin >> h;
    arr.insert(h);
  }
  while (m--) {
    cin >> h;
    auto it = arr.upper_bound(h);
    if (it == arr.begin()) cout << "QAQ" << '\n';
    else {
      cout << *prev(it) << '\n';
      arr.erase(prev(it));
    }
  }
}
