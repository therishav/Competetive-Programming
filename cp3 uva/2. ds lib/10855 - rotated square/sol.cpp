#include <bits/stdc++.h>
using namespace std;

void printMatrix(vector<vector<char> > M) {
  int n = M.size();
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      // cin >> A[i][j]; 
      cout << M[i][j] << " ";
    }
    cout << '\n'; 
  }
}

void rotate90(auto M, auto X) { // rotate M 90 deg cw and save in X
  int n = M.size();
  for(int i = 0; i < n; i++) {
    for(int j = i+1; j < n; j++) {
      swap(M[i][j], M[j][i]);
    }
    reverse(M[i].begin(), M[i].end());
  }

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      X[i][j] = M[i][j];
    }
  }
}

int main(void) {

  int N, n;
  cin >> N >> n;
  
  // vector<vector<char> > A = {{'a', 'b', 'c'}, {'d', 'e', 'f'}, {'g', 'h', 'i'}};
  // int N = 3;
  vector<vector<char> > A(N, vector<char> (N));
  vector<vector<char> > B(n, vector<char> (n));
  vector<vector<char> > first(n, vector<char> (n));

  // initialize big matrix
  for(int i = 0; i < N; i++) {
    for(int j = 0; j < N; j++) {
      cin >> A[i][j]; 
      // cout << A[i][j] << " ";
    }
    // cout << '\n'; 
  }

  // initialize small matrix
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      cin >> B[i][j]; 
      // cout << A[i][j] << " ";
    }
    // cout << '\n'; 
  }

  printMatrix(B);
  // for(int i = 0; i < n; i++) {
  //   for(int j = 0; j < n; j++) {
  //     // cin >> A[i][j]; 
  //     cout << B[i][j] << " ";
  //   }
  //   cout << '\n'; 
  // }
  cout << '\n';

  // rotate +90
  // rotate90(B, first);
  for(int i = 0; i < n; i++) {
    for(int j = i+1; j < n; j++) {
      swap(B[i][j], B[j][i]);
    }
    reverse(B[i].begin(), B[i].end());
  }

  // print reversed matrix
  printMatrix(first);
  // for(int i = 0; i < n; i++) {
  //   for(int j = 0; j < n; j++) {
      
  //     cout << first[i][j] << " ";
  //   }
  //   cout << '\n'; 
  // }
}
