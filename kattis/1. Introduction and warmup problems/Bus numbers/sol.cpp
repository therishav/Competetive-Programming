#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int n;
  cin >> n;
  vector<int> arr(n, 0);
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  sort(arr.begin(), arr.end());
  int i = 0, j = 1;
  bool flag = false;

  if (n == 1)
    cout << arr[i] << '\n';
  else {
    while(i < n) {
      int i2 = i+1, j2 = j+1;
      if((abs(arr[i] - arr[j]) == 1) && (abs(arr[i2] - arr[j2]) == 1)) {
	cout << arr[i] << "-";
	flag = true;
      
	while(flag) {
	  i++;
	  j++;
	  if(abs(arr[i] - arr[j]) != 1) {
	    flag = false;
	    cout << arr[i] << " ";
	    i++;
	    j++;
	  }
	}
      }
      else {
	cout << arr[i] << " ";
	i++;
	j++;
      }
    
    }
  }

  cout << '\n';
  return 0;
}
