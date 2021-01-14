/*
ID: dzlvocp1
TASK: ride
LANG: C++                 
*/
/* LANG can be C++11 or C++14 for those more recent releases */

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    string a, b;
    long long sum1, sum2;

    cin >> a;
    cin >> b;

    sum1 = (int)a[0] - 64;
    sum2 = (int)b[0] - 64;
    // cout << sum1 << '\n';
    // cout << sum2 << '\n';
    for (int i = 1; i < a.size(); i++) 
      sum1 *= ((int)a[i]) - 64;
    sum1 %= 47;
    
    
    for (int i = 1; i < b.size(); i++)
      sum2 *= (int)b[i] - 64;
    sum2 %= 47;


    
    if (sum1 == sum2)
      cout << "GO" << '\n';
    else
      cout << "STAY" << '\n';
    
    return 0;
}
