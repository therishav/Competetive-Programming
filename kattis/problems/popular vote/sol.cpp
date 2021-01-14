#include <bits/stdc++.h>
using namespace std;

int main() {

  int t;
  cin >> t;
  while(t--) {
    int n, total = 0;
    bool flag = true;
    cin >> n;
    vector<int> candidate(n+1, 0);
    for(int i = 1; i <= n; i++) {
      int vote;
      cin >> vote;
      total += vote;
      candidate[i] = vote;
    }
    // for(auto i : candidate)
    //   cout << i << " ";
    // cout << '\n';
    
    int max_index = max_element(candidate.begin(), candidate.end()) - candidate.begin();
    int majority = total / 2;

    for(int i = 1; flag && (i < n); i++) {
      if(candidate[i] != candidate[i+1])
	flag = false;
    }
    // cout << "total: " << total << '\n';
    // cout << "majority: " << majority << '\n';
    if(flag)
      cout << "no winner" << '\n';
    else if(candidate[max_index] > majority)
      cout << "majority winner " << max_index << '\n';
    else
      cout << "minority winner " << max_index << '\n';
  }
}


