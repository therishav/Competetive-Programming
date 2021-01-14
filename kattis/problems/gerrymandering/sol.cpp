#include <bits/stdc++.h>

using namespace std;

int main(void) {
  int p, d, pi, ai, bi, totalA = 0, totalB = 0, wA = 0, wB = 0;
  cin >> p >> d;
  vector<vector<int> > arr(d, vector<int> (2, 0));
  
  while(p--) {
    cin >> pi >> ai >> bi;
    arr[pi-1][0] += ai;
    arr[pi-1][1] += bi;
    totalA += ai; totalB += bi;
  }

  // for (int i = 0; i < d; i++) { 
  //   for (int j = 0; j < 2; j++){ 
  //     cout<< arr[i][j]<< " "; 
  //   } 
  //   cout<< "\n"; 
  // }

  for (int i = 0; i < d; i++) {
    int ai = arr[i][0], bi = arr[i][1];
    int maj = floor((ai + bi)/2) + 1;
    if (ai > bi) {
      wA += ai-maj;
      wB += bi;
      printf("A %d %d\n", ai-maj, bi);
    }
    else {
      wA += ai;
      wB += bi-maj;
      printf("B %d %d\n", ai, bi-maj);
    }
  }

  double efc = (double)abs(wA - wB)/(totalA + totalB);
  printf("%.10f\n", efc);
}
