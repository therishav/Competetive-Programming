#include<bits/stdc++.h>
using namespace std;

#define printM(mp) for (auto i : mp) cout << i.first << " " << i.second << '\n';
#define printV(arr) for (auto i : arr) cout << i << " "; cout << '\n';

int main(void) {
  // there will two maps
  // mp1 string --> int
  // mp2 int --> string 
  string str;
  unordered_map<string, int> mp1;
  unordered_map<int, string> mp2;

  
  while(getline(cin, str)) {
    int ans = 0;    
    bool flag = true;
    istringstream ss(str);
    vector<string> arr;

    while (ss) {
      string word;
      ss >> word;
      arr.push_back(word);
    }
    
    if (arr[0] == "def") {
      int a;
      stringstream ss2(arr[2]);
      ss2 >> a;

      if (mp1.find(arr[1]) != mp1.end()) {
	int va = mp1[arr[1]];
	mp1.erase(arr[1]);
	mp2.erase(va);
      }
      mp1[arr[1]] = a;
      mp2[a] = arr[1];
    }
    
    else if (arr[0] == "calc") {
      // printM(mp1);
      int a, ans = 0;
      for (int i = 1; i < arr.size()-1; i+=2) {
	if (mp1.find(arr[i]) == mp1.end()) { 
	  flag = false;
	  break;
	}
      }
      if (flag) {
	// calculate the statement value and store it in ans
	ans = mp1[arr[1]];
	for (int i = 2; i < arr.size()-2; i+=2) {
	  if (arr[i] == "+")
	    ans += mp1[arr[i+1]];
	  else
	    ans -= mp1[arr[i+1]];
	}
	// check if ans exists in mp2
	if (mp2.find(ans) == mp2.end())
	  flag = false;
      }
      // loop to print the calc statement
      for (int i = 1; i < arr.size()-1; i++)
	cout << arr[i] << " ";
      if (flag) 
	cout << mp2[ans] << '\n';
      else 
	cout << "unknown" << '\n';
    }
    
    else if (arr[0] == "clear") {
      mp1.clear();
      mp2.clear();
    }
  }
}
