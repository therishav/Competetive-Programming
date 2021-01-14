#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, val1, val2;

  while (cin >> n) {
    
    if ((n < 1) || (n > 3000))
      break;
      
    bool Flag = true;
    vector<int> Arr(n, 0);
    vector<bool> ArrBool(n+1, 0);

    for (int i = 0; i < n; i++) {
      cin >> val1;
      // cin >> val2;
      Arr[i] = val1;
      // Arr[(abs(val1-val2))] = true;
    }

    // int j=1;
    for (int i = 0, j = 1; i < n-1; i++, j++) {
      val1 = Arr[i];
      val2 = Arr[j];
      // j++;
      // cout << "abs(val1-val): " << abs(val1-val2) << " ";
      ArrBool[abs(val1-val2)] = true;
    }
    // cout << '\n';

    for (int i = 1; i < n; i++) {
      if (ArrBool[i] != true) {
	Flag = false;
	break;
      }
    }
  
    // for (auto i : Arr)
    //   cout << i << " ";
    // cout << '\n';

    // for (auto i : ArrBool)
    //   cout << i << " ";
    // cout << '\n';

  Flag == true ? cout << "Jolly" << '\n' : cout << "Not jolly" << '\n';
  }
  return 0;
}

