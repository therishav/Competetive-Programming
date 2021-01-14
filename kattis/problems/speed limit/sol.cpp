#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  while(true) {
    cin >> n;
    if(n == -1)
      break;
    int speed, time, distance = 0, temp = 0;
      while(n--) {
	cin >> speed >> time;
	distance += speed * (time - temp);
	temp = time;
      }
      cout << distance << " miles" << '\n';
  }
}
