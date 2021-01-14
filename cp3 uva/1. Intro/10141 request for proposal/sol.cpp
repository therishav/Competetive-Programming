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

void solve() {
  int r, p;
  string s;

  int count = 1;
  while (true) {
    cin >> r >> p;
    cin.ignore();

    if (r == 0 && p == 0)
      break;

    if (count > 1)
      nl;

    cout << "RFP #" << count << '\n';
    for (int i = 0; i < r; i++) {
      getline(cin, s);
      // cout << s << '\n';
    }

    int req_met;
    string company, sc;
    double price, complaince, mx_com = -1.0, sp = -1.0;
    vector<string> selected;
    // for each proposal
    for (int i = 0; i < p; i++) {
      getline(cin, company);
      cin >> price >> req_met;
      cin.ignore();

      for (int j = 0; j < req_met; j++) {
        getline(cin, s);
      }

      complaince = (double)req_met / r;
      // val("company", company);
      // val(" price", price);
      // val(" req_met", req_met);
      // val(" complaince", complaince); nl;

      if ((complaince > mx_com) || ((complaince == mx_com) && (price < sp))) {
        mx_com = complaince;
        sc = company;
        sp = price;
      }
      // val("selected company", sc); nl;
    }
    cout << sc << '\n';
    count++;
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  // ofstream fout ("");
  // ifstream fin ("");
  // int t;
  // cin >> t;
  // while (t--)
    solve();
  return 0;
}
