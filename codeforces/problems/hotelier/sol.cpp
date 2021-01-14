#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int n;
  string event;
  int arr[10] = {0};
  
  cin >> n;
  cin >> event;

  // cout << n << " " << event << '\n';
  for(int i = 0; i < n; i++) {
    if(event[i] == 'L') {
      for(int j = 0; j < 10; j++) {
	if(arr[j] == 0) {
	  arr[j] = 1;
	  break;
	}
      }
    }
    else if(event[i] == 'R') {
      for(int j = 9; j >= 0; j--) {
	if(arr[j] == 0) {
	  arr[j] = 1;
	  break;
	}
      }
    }
    else {
      int num = event[i] - '0';
      // cout << "num : " << num << '\n';
      // cout << event[i] << " " << arr[num] << '\n';
      arr[num] = 0;
    }
    // cout << arr[i] << endl;
      // for(auto i : arr)
      // 	cout << i;
      // cout << endl;
  }
  for(auto i : arr)
    cout << i;
  cout << endl;
}
