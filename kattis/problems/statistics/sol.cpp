#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[])
{
  int n, count = 0;
  while (scanf("%d", &n) != EOF) {
    int max = -1000000, min = 1000000, data;
    while (n--) {
      cin >> data;
      if (max < data) max = data;
      if (min > data) min = data;
    }
    count++;
    printf("Case %d: %d %d %d\n", count, min, max, max-min);
  }
  return 0;
}
