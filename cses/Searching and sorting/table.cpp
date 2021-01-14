#include<bits/stdc++.h>
using namespace std;

int main(void) {
  int n, a;
  set<int> st;
  cin >> n;
  while (n--) {
    cin >> a;
    st.insert(a); 
  }
  cout << st.size() << '\n';
}
