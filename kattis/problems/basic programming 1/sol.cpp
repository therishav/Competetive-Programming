#include<bits/stdc++.h>
using namespace std;

int main(void) {
  int n, t, temp, j = 3;
  vector<int> arr;
  cin >> n >> t;

  if (t < 4) {
    while (j--) {
      cin >> temp;
      arr.push_back(temp);
    }
    if (t == 1) 
      cout << 7 << '\n';
    else if (t == 2) {
      if (arr[0] > arr[1])
	cout << "Bigger" << '\n';
      else if (arr[0] == arr[1])
	cout << "Equal" << '\n';
      else
	cout << "Smaller" << '\n';
    }
    else if (t == 3) {
      sort(arr.begin(), arr.end());
      cout << arr[1] << '\n';
    }
  }
  else {
    while (n--) {
      cin >> temp;
      arr.push_back(temp);
    }
   if (t == 4) {
      int sum = 0;
      for (int i = 0; i < arr.size(); i++)
	sum += arr[i];
      cout << sum << '\n';
    }
  
   else if (t == 5) {
     int sum = 0;
     for (int i = 0; i < arr.size(); i++) {
       if (arr[i] % 2 == 0)
	 sum += arr[i];
     }
     cout << sum << '\n';
   }
   else if (t == 6) {
     vector<char> ch;
     for (int i = 0; i < arr.size(); i++) {
       char c = 'a';
       int temp = abs(arr[i]) % 26;
       c += temp;
       ch.push_back(c);
     }
     for (auto i : ch)
       cout << i;
     cout << '\n';
   }
   else if (t == 7) {
     int i = 0;
     i = arr[i];
     while (true) {
       // cout << i << '\n';
       if (i > arr.size()-1) {
	 cout << "Out" << '\n';
	 break;
       }
       else if (i == arr.size()-1) {
	 cout << "Done" << '\n';
	 break;
       }
       else {
	 int next = arr[arr[i]];
	 i = arr[i];
	 // cout << arr[i] << " : " << next << '\n';
	 if (arr[i] == next) {
	   cout << "Cyclic" << '\n';
	   break;
	 }
       }
     }
   }
  }
  return 0;
}
  
  // cout << "t: " << t << '\n';


  
