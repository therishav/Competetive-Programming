#include<bits/stdc++.h>
using namespace std;

typedef pair<int, int> ii;
typedef vector<ii> vii;

int main() {
  // int V, E, total_neighbors, id, weight, a, b;
  // vector<vii> AdjList;

  // cin >> V;
  // AdjList.assign(V, vii()); // quick way to initialize AdjList with V entries of vii
  // for (int i = 0; i < V; i++) {
  //   cin >> total_neighbors;
  //   for (int j = 0; j < total_neighbors; j++) {
  //     cin >> id >> weight;
  //     AdjList[i].push_back(ii(id - 1, weight));    // some index adjustment
  //   }
  // }

  // for (int i = 0; i < AdjList.size(); i++) {
  // for (auto j = AdjList[i].begin(); j != AdjList[i].end(); j++)
  //   cout << j->first << " " << j->second << " ";
  // cout << '\n';
  // }
  // printf("Neighbors of vertex 0:\n");
  // for (vii::iterator j = AdjList[0].begin(); j != AdjList[0].end(); j++)
  //   // AdjList[0] contains the required information
  //   // O(k), where k is the number of neighbors
  //   printf("Edge 0-%d (weight = %d)\n", j->first, j->second);

  int n, sum = 0;
  char b;
  string card;
  map<char, int> dominant = {{'A', 11}, {'K', 4}, {'Q', 3}, {'J', 20}, {'T', 10}, {'9', 14}, {'8', 0}, {'7', 0}};
  map<char, int> submissive = {{'A', 11}, {'K', 4}, {'Q', 3}, {'J', 2}, {'T', 10}, {'9', 0}, {'8', 0}, {'7', 0}};
  cin >> n >> b;
  n *= 4;
  while (n--) {
    cin >> card;
    if (card[1] == b)
      sum += dominant[card[0]];
    else
      sum += submissive[card[0]];
  }
  cout << sum << '\n';
}
