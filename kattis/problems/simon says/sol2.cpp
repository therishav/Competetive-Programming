#include<bits/stdc++.h>
using namespace std;

int main(void) {
  int n;
  string str;
  cin >> n;
  cin.ignore();
  while(n--) {
    // getline(cin, str);
    getline(cin, str);

    vector<string> arr;
    istringstream iss(str);
    string s;
    while ( getline( iss, s, ' ' ) ) {
      // printf( "`%s'\n", s.c_str() );
      arr.push_back(s);
    }
    if(arr[0] == "Simon" && arr[1] == "says") {
      for(int i = 2; i < arr.size()-1; i++)
	cout << arr[i] << " ";
      cout << arr.back() << '\n';
    }

    // cout << str << '\n';
  }
}
