/*
  ID: dzlvocp1
  TASK:
  LANG: C++
*/
/* LANG can be C++11 or C++14 for those more recent releases */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<pair<int, int>> vii;
typedef vector<int> vi;

#define print(a) cout << a << '\n';
#define val(a, b) cout << a << " : " << b << " | ";
#define nl cout << '\n';
#define rep(i, a, b) for (int i = a; i < b; i++)
#define printV(arr) for (auto i : arr) cout << i << " "; cout << '\n';
#define print2V(arr) for (auto i : arr) { for (auto j : i) cout << j << " "; cout << '\n'; }
#define printP(arr) for (auto i : arr) {val(i.first, i.second);nl;}
#define PB push_back
#define MP make_pair

// Function to calculate distance
float distance(int x1, int y1, int x2, int y2)
{
    // Calculating distance
    return sqrt(pow(x2 - x1, 2) +
                pow(y2 - y1, 2) * 1.0);
}

void solve() {
  ofstream fout ("triangles.out");
  ifstream fin ("triangles.in");

  int n, a, b;
  ll mx = -1;
  fin >> n;
  vector<ll> X(n);
  vector<ll> Y(n);

  rep(i, 0, n)
    fin >> X[i] >> Y[i];

  // iterate thru all possible triples, and check to see if they are a valid triangle.

  rep(i, 0, n) {
    rep(j, 0, n) {
      rep(k, 0, n) {
        if (Y[i] == Y[j] && X[i] == X[k]) {
          ll area = abs(X[j]-X[i]) * abs(Y[k]-Y[i]);
          if (area > mx)
            mx = area;
        }
      }
    }
  }
  fout << mx << '\n';
  // printP(arr);
}

int main() {
  // int t;
  // cin >> t;
  // while (t--)
  solve();
  return 0;
}
