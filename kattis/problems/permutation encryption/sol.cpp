#include<bits/stdc++.h>
using namespace std;

int main(void) {
  int n, count, temp;
  string str, sol = "";
  while(true) {
    cin >> n;
    count = n;
    if(n == 0)
      break;
    vector<int> arr;
    while(count--) {
      cin >> temp;
      arr.push_back(temp);
    }

    // for(auto i : arr) 
    //   cout << i << " ";
    // cout << '\n';
    
    cin.ignore(); 
    getline(cin, str);
    // cin >> str;
    while((str.size() % n) != 0)
      str.push_back('*');

    string sol = ""; 
    for(int i = 0; i < str.size(); i+=n) {
      vector<char> en;
      for(int j = i; j < i+n; j++) {
    	en.push_back(str[j]);
      }
      for(int k = 0; k < n; k++) {
	sol += en[arr[k]-1];
      }
      // for(auto i : en)
      // 	cout << i << " ";
      // cout << '\n';
    }

    cout << "'"; 
    for(int i = 0; i < sol.size(); i++) {
      if(sol[i] != '*')
    	cout << sol[i];
      else
    	cout << " ";
    }
    cout << "'"<< '\n';
    // cout << "s: " << str << '\n';
    // cout << "sol: " << sol << '\n';
  }
}

