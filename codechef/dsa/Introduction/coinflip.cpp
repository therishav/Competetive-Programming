#include <bits/stdc++.h>
using namespace std;


int main() {
  // h h h h h
  // t h t h t odd then opposite of inital value will be larger n+1/2
  //
  int t;
  cin >> t;
  while (t--) {
    int g;
    cin >> g;
    while (g--) {
      int i, n, q, head_count = 0, tail_count = 0;              // i initial stage, n no of coins/games, q return count type
      cin >> i >> n >> q;       // 1 means head , 2 means tail
      if ((n % 2) == 0) {
        head_count = n/2;
        tail_count = n/2;
      }
      else {
        if (i == 1) {
          tail_count = (n + 1) / 2;
          head_count = (n - 1) / 2;
        }
        else {
          head_count = (n + 1) / 2;
          tail_count = (n - 1) / 2;
        }
      }
      (q == 1) ? cout << head_count << '\n' : cout << tail_count << '\n';
    }
  }
}

// h h h h h h
// i h h h h h
// h i h h h h
// i h i h h h
// h i h i h h
// i h i h i h
// h i h i h i
// so if N is even then no of heads and tails will be equal just divide N and give the answer

// if n is 1
// then we have just its opposte after N rounds and one of count head or tail will be zero and the other 1
