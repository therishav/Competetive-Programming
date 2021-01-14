#include<bits/stdc++.h>
using namespace std;

int main(void) {
  int t;
  while (cin >> t) {
    while (t--) {
      int m, r, q;
      cin >> m >> r;
      vector<int> arr (m);
      for (int i = 0; i < m; i++)
	arr[i] = i+1;
      // for (auto i : arr)
      // 	cout << i << " ";
      // cout << '\n';

      while (r--) {
	cin >> q;
	int count = 0;
	for (int i = 0; i < m; i++) {
	  if (arr[i] == q) {
	    int j = i;
	    if (i == 0)
	      cout << 0 << " ";
	    else {
	      while (j > 0) {
		swap(arr[j], arr[j-1]);
		j--;
		count++;
	      }
	      cout << count << " ";
	    }
	    break;
	  }
	}
      }
      cout << '\n';
    }
  }
}
