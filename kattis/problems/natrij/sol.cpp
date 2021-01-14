// hint: convert hh:mm:ss to seconds; make sure the second time is larger than the first time; corner case: 24:00:00

#include <bits/stdc++.h>

using namespace std;

int main(void) {
  int ch,cm,cs,dh,dm,ds;
  char c;
  cin >> ch >> c >> cm >> c >> cs >> dh >> c >> dm >> c >> ds;

  if(ds < cs) {
    ds += 60;
    dm--;
  }

  if(dm < cm) {
    dm += 60;
    dh--;
  }

  if(dh < ch) 
    dh += 24;

  int h,m,s;
  h = dh - ch;
  m = dm - cm;
  s = ds - cs;

  if (h+m+s == 0)
    h+=24;

  cout << (h<10 ? "0" : "") << h << c << (m<10 ? "0" : "") << m << c << (s<10 ? "0" : "") << s << '\n';
  
  // printf("%d %d %d\n", h1, m1, s1);
  // printf("%d %d %d\n", h2, m2, s2);
}