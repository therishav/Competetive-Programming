#include<bits/stdc++.h>
using namespace std;

int main() {

  int n;
  int min_sum = 0, sec_sum = 0;
  cin >> n;
  while(n--) {
    double m, s;
    cin >> m >> s;
    min_sum += m; sec_sum += s;
   
  }

  double total = sec_sum/(min_sum*60.00);
  if(total < 1.0)
    printf("measurement error\n");
  else
    printf("%.9f\n", total);

  return 0;
}
