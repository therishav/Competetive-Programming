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
  int round;
  while (true) {
    cin >> round;

    if (round == -1)
      break;

    int strokes = 7, rem;
    string sol, guess;
    set<char> st;

    cin >> sol;
    cin >> guess;
    val(sol, guess);

    rep(i, 0, sol.size()) {
      st.insert(sol[i]);
    }
    rem = st.size();

  //   int i = 0;
  //   cout << "Round " << round << '\n';
  //   while (true) {
  //     if (strokes == 0) {
  //       cout << "You lose." << '\n';
  //       break;
  //     }
  //     else if (rem == 0) {
  //       cout << "You win." << '\n';
  //       break;
  //     }
  //     else if ((rem > 0) && (strokes > 0) && (i == guess.size())) {
  //       cout << "You chickened out." << '\n';
  //       break;
  //     }

  //     // guess was found in the set
  //     if (st.find(guess[i]) != st.end()) {
  //       rem--;
  //       st.erase(guess[i]);
  //     }
  //     else {                    // guess was not found in the set
  //       strokes--;
  //     }
  //     i++;
  //   }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  // ofstream fout ("");
  // ifstream fin ("");
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}
