#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int main(void) {
  vector<int> arr;
  int sum = 1, i = 0;
  string s;
  cin >> s;

  if (s.size() == 1) 
    cout << 1 << '\n';
  else {
    while (i < s.size()-1) {
      for (int j = i+1; j < s.size(); j++) {
	if (s[i] == s[j]) {
	  sum++;
	  // cout << i << " " << j << " " << sum <<'\n';
	}
	else {

	  break;
	}
      }
      arr.push_back(sum);
      i+=sum;
      // cout << i << '\n';
      sum = 1;
    }
    // for (auto i : arr)
    //   cout << i << " ";
    // cout << '\n';
    cout << *max_element(arr.begin(), arr.end()) << '\n';
  }
  return 0;
}
