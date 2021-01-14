/*pp
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
#define print(a, b) cout << a << " : " << b << " | ";
#define nl cout << '\n';
#define rep(i, a, b) for (int i = a; i < b; i++)
#define printV(arr) for (auto i : arr) cout << i << " "; cout << '\n';

// Print the queue
void showq(queue <int> gq)
{
  queue <int> g = gq;
  while (!g.empty())
    {
      cout << '\t' << g.front();
      g.pop();
    }
  cout << '\n';
}

void solve() {
  int n;
  cin >> n;
  vector<int> ans(n+1);
  queue<int> qarr;
  for (int i = 1; i <= n; i++)
    qarr.push(i);
  // showq(qarr);

  int qsize = qarr.size();
  for (int count = 1; count <= n; count++) {
    int times = count;
    while (times--) {
      int temp = qarr.front();
      // showq(qarr);
      qarr.pop();
      qsize--;
      qarr.push(temp);
    }
    ans[qarr.front()] = count;
    qarr.pop();
    qsize--;
    // showq(qarr);
    // printV(ans);
  }
  // printV(ans);

  
  for (int i = 1; i <= n; i++)
    cout << ans[i] << " ";
  cout << '\n';
}

int main() {
  // ofstream fout ("");
  // ifstream fin ("");
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}


