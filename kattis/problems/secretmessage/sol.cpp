#include<bits/stdc++.h>
using namespace std;

// void roatate(vector<vector<int> > &arr) {

  
// }

string encode(string s, int k) {
  vector<vector<char> > v;
  v.resize(k, vector<char> (k));

  for(int i = 0; i < k; i++) {
    for(int j = 0; j < k; j++) {
      v[i][j] = s[(i*k)+j];
    }
  }

  string ret = "";

  for(int i = 0; i < k; i++) {
    for(int j = k-1; j >= 0; j++) {
      char temp = v[i][j];
      if(temp != '*')
	ret += temp;
    }
  }
  return ret;
}

int main(void) {
  int n, size;
  string s;
  
  cin >> n;
  while(n--) {
    // getline(cin, s);
    cin >> s;
    cout << s << '\n';
    size = s.size();
    int m = 0, k = 0, pad;
    while(m < size) {
      m = k*k;
      k++;
    }
    pad = m - size;
    // vector<vector<char> > arr(m, vector<char> (k-1)); 
    while(pad--) 
      s.push_back('*');

    cout << encode(s, k) << '\n';
    
    // int it = 0;
    // for(int i = 0; i < k-1; i++) {
    //   for(int j = 0; j < k-1; j++) {
    // 	arr[i][j] = s[it];
    // 	it++;
    //   }
    // }

    for(int i = 0; i < k-1; i++) {
      for(int j = 0; j < k-1; j++) {
    	cout << arr[i][j] << " ";
      }
      cout << '\n';
    }

    // // rotate(arr);
    // reverse(arr.begin(), arr.end());
    // // // int size = arr.size();

    // for(int i = 0; i < k-1; i++) {
    //   for(int j = i+1; j < k-1; j++) {
    // 	// swap(arr[i][j], arr[j][i]);
    //   }
    // }

    // print rotated 2d array
    // cout << '\n';
    // for(int i = 0; i < k-1; i++) {
    //   for(int j = 0; j < k-1; j++) {
    // 	cout << arr[i][j] << " ";
    //   }
    //   cout << '\n';
    // }

    // cout << s << '\n';
  }
}
