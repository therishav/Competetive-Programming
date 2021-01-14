#include <bits/stdc++.h>
#define INF (int) 1e9
using namespace std;

int main() {
  int l;
  double sum = 0, cost;
  cin >> cost >> l;

  while (l--) {
    double width, length;
    cin >> width >> length;
    sum += (width * length * cost);
  }
  cout << setprecision(7) << fixed; 
  cout << sum << '\n';
  return 0;
}
