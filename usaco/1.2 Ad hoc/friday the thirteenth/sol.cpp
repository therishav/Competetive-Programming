/*
  ID: dzlvocp1
  TASK: friday
  LANG: C++                 
*/
/* LANG can be C++11 or C++14 for those more recent releases */

#include <bits/stdc++.h>
using namespace std;

// Tomohiko Sakamoto’s Algorithm for finding the days of the week.
int dow(int y, int m, int d) {
 
    // array with leading number of days values 
    int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 }; 
      
    // if month is less than 3 reduce year by 1 
    if (m < 3) 
        y -= 1; 
      
    return ((y + y / 4 - y / 100 + y / 400 + t[m - 1] + d) % 7); 
} 

int main() {
  ofstream fout ("friday.out");
  ifstream fin ("friday.in");

  int n, day = 13;
  vector<int> arr(7);
  fin >> n;
  n = 1900 + (n - 1);
  for (int year = 1900; year <= n; year++) {
    for (int month = 1; month <= 12; month++) {
      int t = dow(year, month, day);
      // cout << month << '\n';
      arr[t]++;
    }
  }
  fout << arr.back();
  for (int i = 0; i < arr.size()-1; i++)
    fout << " " << arr[i];
  fout << '\n';
  return 0;
}
