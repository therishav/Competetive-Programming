#include<bits/stdc++.h>
using namespace std;

int collision(unordered_map<int, unordered_map<string, int>> vals) {

  int sum = 0;

  // for each hash
  for (auto i : vals) {
    // getting the count of each different string and pushing onto a int vector
    vector<int> count;
    for (auto j : i.second)
      count.push_back(j.second);

    // // the vector is
    // for (auto j : count)
    //   cout << j << " ";
    // cout << '\n';

    for (int j = 0; j < count.size()-1; j++) {
      for (int k = j+1; k < count.size(); k++) {
	sum += count[j] * count[k];
      }
    }
  }
  return sum;
}

int main(void) {
  int n;
  string str;

  while (true) {
    cin >> n;
    cin.ignore();
    if (n == 0)
      break;

    unordered_set<string> s;
    unordered_map<int, unordered_map<string, int>> vals;

    while (n--) {
      getline(cin, str);
      s.insert(str);


      // calculating hash
      int hash = 0;
      for (auto c : str) 
	hash ^= c;
      vals[hash][str]++;
    }

    // cout << "hash: " << '\t' << "sentence: " << '\n'; 
    // // printing the unordered map:
    // for (auto it : vals) {
    //   cout << it.first;
    //   for (auto it2 : it.second) {
    // 	cout << '\t' << it2.first << '\t' << it2.second << '\n';
    //   }
    //   // cout << '\n';
    // }

    cout << s.size() << " ";
    cout << collision(vals) << '\n';
  }
}

