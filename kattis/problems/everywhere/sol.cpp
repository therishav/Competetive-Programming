#include<bits/stdc++.h>
using namespace std;

int main(void) {
  int n, a;
  cin >> n;
  while(n--) {
    vector<string> v;
    string str;
    cin >> a;
    while(a--) {
      cin >> str;
      v.push_back(str);
    }
    sort(v.begin(), v.end());
    // Using std::unique 
    auto ip = unique(v.begin(), v.end());
    // Resizing the vector so as to remove the undefined terms 
    v.resize(distance(v.begin(), ip));

    // for(auto i : v) 
    //   cout << i << " ";
    // cout << '\n';
    cout << v.size() << '\n';
  }
}