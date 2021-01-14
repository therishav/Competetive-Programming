#include <bits/stdc++.h>
using namespace std;

void rotate(vector<vector<char> >& myMatrix) 
{
       
  reverse(myMatrix.begin(), myMatrix.end());

  int size = myMatrix.size();

  for (int i = 0; i < size; ++i)
    {
      for (int j = i+1; j < size; ++j)
	{
	  swap(myMatrix[i][j], myMatrix[j][i]);
	}
    }
}

void print(vector<vector<char> >& arr) {
  for(int i = 0; i < arr.size(); i++) {
    for(int j = 0; j < arr.size(); j++) {
      cout << arr[i][j] << " ";
    }
    cout << '\n';
  }
}

int main(void) {
  int n, size;
  string s;
  
  cin >> n;
  while(n--) {
    // getline(cin, s);
    cin >> s;
    // cout << s << '\n';
    size = s.size();
    int m = 0, k = 0, pad;
    while(m < size) {
      m = k*k;
      k++;
    }
    pad = m - size;
    vector<vector<char> > arr(k-1, vector<char> (k-1)); 
    while(pad--) 
      s.push_back('*');

    // populate the vector with contents of input string
    int it = 0;
    for(int i = 0; i < k-1; i++) {
      for(int j = 0; j < k-1; j++) {
    	arr[i][j] = s[it];
    	it++;
      }
    }

    // print(arr);
    rotate(arr);

    // print the ans
    for(int i = 0; i < k-1; i++) {
      for(int j = 0; j < k-1; j++) {
	if(arr[i][j] != '*')
	  cout << arr[i][j];
      }
    }
    cout << '\n';
    // print(arr);
  }
}
