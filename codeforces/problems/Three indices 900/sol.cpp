#include<bits/stdc++.h>
using namespace std;

int main(void) {
  int T, n;
  cin >> T;

  while(T--) {
    cin >> n;
    vector<int> arr(n, 0);
    vector<int> indices(3, 0);
    bool exist = false;
    for(int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    for(int i = 0; i < n; i++) {
      for(int j = i+1; j < n; j++) {
	if(arr[i] < arr[j]) {
	  for(int k = j+1; k < n; k++) {
	    if(arr[j] > arr[k]) {
	      indices[0] = arr[i];
	      indices[1] = arr[j];
	      indices[2] = arr[k];
	      exist = true;
	      break;
	    }
	  }
	}
	if (exist) {break;}
      }
      if (exist) {break;}
    }

    if(exist) {
      sort(indices.begin(), indices.end());
      cout << "YES" << '\n';
      for(auto i : indices)
	cout << i << " ";
      cout << '\n';
    }
    else {
      cout << "NO" << '\n';
    }
  }
}