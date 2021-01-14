#include <bits/stdc++.h>
using namespace std;

#define printV(arr) for (auto i : arr) cout << i << " "; cout << '\n';

int main(void) {
  int n, c = 1;
  while (cin >> n) {
    int in, q, qin;
    vector<int> arr, sum;

    cout << "Case " << c << ":" << '\n';
    // taking the distinct integer number as input.
    while (n--) {
      cin >> in;
      arr.push_back(in);
    }

    // sum each element with all other elements and store in an sum array.
    for (int i = 0; i < arr.size()-1; i++) {
      for (int j = i+1; j < arr.size(); j++) {
	int s = arr[i] + arr[j];
	sum.push_back(s);
      }
    }
    // printing the int array
    // printV(arr);
    // printV(sum);
    sort(sum.begin(), sum.end());
    // no of queries
    cin >> q;
    // cout << "q = " << q << '\n';

    while (q--) { 
      cin >> qin;		// store each query? no, trying to process it.

      // check if lower bound works return position >= value.
      auto it = lower_bound(sum.begin(), sum.end(), qin);
      if (abs(*it - qin) > abs(*(it-1) - qin))
	it--;
      if (*it == 0)
	it = sum.begin();
      else if (it == sum.end())
	it = sum.end()-1;
      cout << "Closest sum to " << qin << " is " << *it << "." << '\n';
    }
    // cout << '\n' << "---" << '\n';
    c++;
  }
}
