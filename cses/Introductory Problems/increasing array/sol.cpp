#include<bits/stdc++.h>
using namespace std;

#define printA(A) for(auto i : A) cout << i << " "; cout << '\n';
typedef long long ll;

int main(void) {
  ll n, prev, curr, diff, count = 0;
  vector<ll> arr;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> curr;
    arr.push_back(curr);
  }
  // printA(arr);
  for (int i = 0; i < n-1; i++) {
    int j = i+1;
    diff = 0;
    if (arr[i] > arr[j]) {
      curr = j;
      diff = abs(arr[i] - arr[j]);
      arr[curr] += diff;
      count += diff;
    }
    // cout << diff << endl;
    // printA(arr);
  }
  cout << count << '\n';
}
