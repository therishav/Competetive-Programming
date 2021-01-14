#include <bits/stdc++.h>
using namespace std;

#define printV(arr) for (auto i : arr) cout << i << " "; cout << '\n'; 

void permute(int n) {
  vector<int> perm(n);
  for (int i = 0; i < n; i++) perm[i] = i+1;

  // do {
  //   for (auto i : perm)
  //     cout << i << " ";
  //   cout << '\n';
  // } while (next_permutation(perm.begin(), perm.end()));
  next_permutation(perm.begin(), perm.end());
  printV(perm);
  next_permutation(perm.begin(), perm.end());
  printV(perm);
  next_permutation(perm.begin(), perm.end());
  printV(perm);
}

void subsets(int n) {
  for (int subset = 0; subset < (1 << n); subset++) {
    for (int i = 0; i < n; i++) {
      if ((subset & (1 << i)) != 0)
	cout << i+1 << " ";
    }
    cout << '\n';
  }
}

int main() {
  permute(5); 
  return 0;
}
