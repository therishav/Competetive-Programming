#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

// Union-Find Disjoint Sets Library written in OOP manner, using both path compression and union by rank heuristics
class UnionFind {                                              // OOP style
private:
  vi p, rank, setSize;                       // remember: vi is vector<int>
  int numSets;
public:
  UnionFind(int N) {
    setSize.assign(N, 1); numSets = N; rank.assign(N, 0);
    p.assign(N, 0); for (int i = 0; i < N; i++) p[i] = i; }
  int findSet(int i) { return (p[i] == i) ? i : (p[i] = findSet(p[i])); }
  bool isSameSet(int i, int j) { return findSet(i) == findSet(j); }
  void unionSet(int i, int j) { 
    if (!isSameSet(i, j)) { numSets--; 
      int x = findSet(i), y = findSet(j);
      // rank is used to keep the tree short
      if (rank[x] > rank[y]) { p[y] = x; setSize[x] += setSize[y]; }
      else                   { p[x] = y; setSize[y] += setSize[x];
	if (rank[x] == rank[y]) rank[y]++; } } }
  int numDisjointSets() { return numSets; }
  int sizeOfSet(int i) { return setSize[findSet(i)]; }
};

int main(void) {

  int n, m, h1, h2;
  cin >> n >> m;

  // n being the total no of household i.e disjoint sets
  UnionFind UF(n+1);		// creating n disjoint sets
  vector<int> arr(n);

  for (int i = 0; i < n; i++)
    arr[i] = i+1;

  UF.unionSet(0, 1);
  while (m--) {
    cin >> h1 >> h2;
    UF.unionSet(h1, h2);
  }


  // for (int i = 1; i <= n; i++) // findSet will return 1 for {0, 1} and 3 for {2, 3, 4}
  //   printf("findSet(%d) = %d, sizeOfSet(%d) = %d\n", i, UF.findSet(i), i, UF.sizeOfSet(i));

  // for (auto i : arr)
  //   cout << i << " ";
  // cout << '\n';

  // remaining no of disjoint sets
  if (UF.numDisjointSets() == 1)
    cout << "Connected" << '\n';
  else {
    // cout << UF.numDisjointSets() << '\n';
    int internet = UF.findSet(*arr.begin());
    // int last = *(st.end()-1);
    // cout << internet << '\n';
    // cout << "Houses not connected to internet are: " << '\n';  
    for (auto i : arr) {
      if (internet != UF.findSet(i))
	cout << i << '\n';
    }
  }
  return 0;
}
