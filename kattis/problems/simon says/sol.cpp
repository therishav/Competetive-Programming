#include<bits/stdc++.h>
using namespace std;

int main(void) {
  int n;
  string str;
  // char c[101];
  cin >> n;
  cin.ignore();
  while(n--) {
    
    getline(cin, str);

    istringstream ss(str);
    bool flag1=false, flag2=false;
    string s = "";
    vector<string> arr;

    do {
      string word;
      ss >> word;
      if(flag1 && flag2) {
	// arr.push_back(word);
	s += word;
	s += " ";
      }
      if(word == "Simon")
	flag1 = true;
      if(word == "says")
	flag2 = true;
    } while(ss);
    cout << s;
    // for(auto i : arr) 
    //   cout << i << " ";
    // cout << '\n';;
  }
}
