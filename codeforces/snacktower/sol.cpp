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
#define print(a) cout << a << '\n';
#define val(a, b) cout << a << " : " << b << " | ";
#define nl cout << '\n';
#define rep(i, a, b) for (int i = a; i < b; i++)
#define printV(arr) for (auto i : arr) cout << i << " "; cout << '\n';

void PrintStack(stack<int> s)
{
    // If stack is empty
    if (s.empty())
        return;

// Extract top of the stack
    int x = s.top();

    // Pop the top element
    s.pop();

    // Print the current top
    // of the stack i.e., x
    cout << x << ' ';

    // Proceed to print
// remaining stack
    PrintStack(s);

    // Push the element back
    s.push(x);
}

void solve() {
  stack<int> st1;
  priority_queue<int> st2;
  int n, num, temp;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    cin >> num;
    if (st1.empty() && num == n) {
      cout << num << " ";
      st1.push(num);
    }
    else {
      nl;
      st2.push(num);
    }

    while ((!st1.empty() && (!st2.empty()) && (st1.top() - st2.top() == 1))) {
      cout << st2.top() << " ";
      st1.push(st2.top());
      st2.pop();
    }

    // cout << "Iteration : " << i << '\n';
    // cout << "stk 1: "; PrintStack(st1);
    // cout << "stk 2: "; printV(st2) nl;
  }
  nl;
}


int main() {
  // ofstream fout ("");
  // ifstream fin ("");
  solve();
  return 0;
}
