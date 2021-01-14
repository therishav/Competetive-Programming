// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//   // a amount pooja wishes to withdraw; b pooja's ac balance
//   int a;
//   double b;
//   cin >> a >> b;
//   if(a == 0)
//     printf("%.2f\n", b);
//   else if((a > b) || (a+0.5 > b))
//     printf("%.2f\n", b);
//   else if(a % 5 == 0)
//     printf("%.2f\n", (b-a)-0.50);
//   else
//     printf("%.2f\n", b);
  
//   return 0;
// }

#include <bits/stdc++.h>

using namespace std;

long long fact(int n) {
  if(n == 1)
    return 1;
  else
    return n * fact(n-1);
}

int main() {
  
  int t, n, temp, len, x;
  vector<int> n_arr;
  // vector<int> n_arr(200);
  cin >> t;
  // t = 1;
  while(t--) {
    cin >> n;
    // n = 45;
    len = 0;
    while(n > 0) {
      temp = n % 10;
      n /= 10;
      n_arr.push_back(temp);
      len++;
    }
    
    temp = 0;
    int m = 37;
    for(int i = 0; i < len; i++) {
      x = (n_arr[i] * m) + temp;
      n_arr[i] = x % 10;
      temp = x / 10;
    }
    
    if(temp > 0) {
      n_arr.push_back(temp % 10);
      // cout << "temp: " << temp << '\n';
      temp = temp / 10;
      // cout << "temp: " << temp << '\n';
      // cout << (temp < 0) << '\n';
      len++;
      if(temp == 1) {
      	n_arr.push_back(temp);
	len++;
      }
    }
    
    // n_arr.resize(i+1);
    for(int i = len-1; i >= 0; i--) {
      cout << n_arr[i] << " ";
    }
    cout << '\n';
    
    // for(auto x : n_arr)
    //   cout << x << " ";
    // cout << '\n';
    // cout << i << '\n';
  }
  return 0;
}
