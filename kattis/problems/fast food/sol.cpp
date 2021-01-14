#include<bits/stdc++.h>
using namespace std;

void Print2dVect(vector<vector<int>> vec) {
  for (int i = 0; i < vec.size(); i++) { 
    for (int j = 0; j < vec[i].size(); j++) 
      cout << vec[i][j] << " "; 
    cout << endl; 
  } 
}

void PrintVect(vector<int> vec) {
  for(auto i : vec)
    cout << i << " ";
  cout << '\n';
}

int main() {
  int t;

  cin >> t;
  while(t--) {
    int n, m, k, ans = 0;
    cin >> n >> m;
    vector<vector<int>> sticker_req(n);
    vector<int> collected_stickers(m+1);
    for(int i = 0; i < n; i++) {
      cin >> k;
      k++;
      while(k--) {
	int val;
	cin >> val;
	sticker_req[i].push_back(val);
      }
    }
    
    for(int i = 1; i <= m; i++) {
      int val;
      cin >> val;
      collected_stickers[i] = val;
    }

    // Print2dVect(sticker_req);
    // PrintVect(collected_stickers);

    // solution
    int total = 0;
    for(int i = 0; i < n; i++) {
      int lo = collected_stickers[sticker_req[i][0]], last = sticker_req[i].size()-1;
      for(int j = 0; j < sticker_req[i].size()-1; j++) {
	int index = sticker_req[i][j];
	lo = min(lo, collected_stickers[index]);
      }
      // cout << "lo :" << lo << '\n';
      total += lo * sticker_req[i][last];
      // cout << "sticker_req[i][last] " << sticker_req[i][last] << '\n';
    }
    cout << total << '\n';
  }
  return 0;
}
