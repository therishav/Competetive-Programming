#include<bits/stdc++.h>
using namespace std;

#define ll long long

vector<ll> get_path(ll n) {
  vector<ll> arr;
  while(n != 1) {
    arr.push_back(n);

    if(n%2 == 0) 
      n /= 2;
    else {
      n *= 3;
      n++;
    }
  }

  arr.push_back(1);
  return arr;
}

int main(void) {

  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  
  ll a, b;
  
  while(true) {
    cin >> a >> b;
    if((a == 0) && (b == 0))
      break;

    vector<ll> arr1 = get_path(a);
    vector<ll> arr2 = get_path(b);
    // bool flag1 = true, flag2 = true;
    
    // arr1.push_back(a);
    // arr2.push_back(b);
    
    // while(flag1 || flag2) {
    //   if(a == 1)
    // 	flag1 = false;
    //   if(b == 1)
    // 	flag2 = false;
      
    //   if(flag1) {
    // 	if((a % 2) == 0) 
    // 	  a = a/2;
    // 	else
    // 	  a = (3*a) + 1;
    // 	arr1.push_back(a);
    //   }
      
    //   if(flag2) {
    // 	if((b % 2) == 0) 
    // 	  b = b/2;
    // 	else
    // 	  b = (3*b) + 1;
    // 	arr2.push_back(b);
    //   }

    ll count1=0, count2=0, eq = 1;
    bool flag = false;

    // // trivial and inefficient solution
    // for(int i = 0; i < arr1.size(); i++) {
    //   for(int j = 0; j < arr2.size(); j++) {
    // 	flag = (arr1[i] == arr2[j]);
    // 	// cout << arr1[i] << " : " << arr2[j] << " : " << flag <<'\n';
    // 	if(flag) {
    // 	  eq = arr1[i];
    // 	  count1 = i;
    // 	  count2 = j;
    // 	  goto end;
    // 	}
    //   }
    //   // if(flag)
    //   // 	break;
    // }

    // fast solution just counting similar elements from the back
    while(true) {
      if(arr1.size() > 0 && arr2.size() > 0 && arr1.back() == arr2.back()) {
	eq = arr1.back();
	arr1.pop_back();
	arr2.pop_back();
      }
      else
	goto end;
    }

  end:
    count1 = arr1.size(); count2 = arr2.size();
    // printf("%d needs %d steps, %d needs %d steps, they meet at %d\n", arr1[0], count1, arr2[0], count2, eq);

    cout << arr1[0] << " needs " << count1 << " steps, ";
    cout << arr2[0] << " needs " << count2 << " steps, ";
    cout << "they meet at " << eq << endl;
    // for(auto i : arr1)
    //   cout << i << " ";
    // cout << '\n';

    // for(auto i : arr2)
    //   cout << i << " ";
    // cout << '\n';
  }
}
