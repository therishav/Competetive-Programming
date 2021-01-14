#include <bits/stdc++.h>
using namespace std;

int main () {

  int t;
  cin >> t;
  while (t--) {

    int activites, laddus = 0;
    string origin;
    cin >> activites >> origin;
    while (activites--) {
      string act;
      cin >> act;
      if (act == "CONTEST_WON") {
        int rank;
        cin >> rank;
        laddus += 300;
        if (rank <= 20)
          laddus += 20 - rank;
      }
      else if (act == "TOP_CONTRIBUTOR") {
        laddus += 300;
      }
      else if (act == "BUG_FOUND") {
        int severity;
        cin >> severity;
        laddus += severity;
      }
      else if (act == "CONTEST_HOSTED") {
        laddus += 50;
      }
    }
    // cout << " laddus = " << laddus << endl;
    (origin == "INDIAN") ? cout << laddus/200  << "\n" : cout << laddus/400  << "\n";
  }
  return 0;
}
