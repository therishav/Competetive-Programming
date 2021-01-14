#include <bits/stdc++.h>

using namespace std;

int main() {
  int n = 5, i = 0;
  vector<string> hand(n);
  while(n--) {
    string card;
    cin >> card;
    hand[i] = card;
    i++;
  }
  // for(auto i : hand)
  //   cout << i[0] << " ";
  // cout << '\n';
  // as the no of elements is only 5 we can do a greedy solution of as many loops as we like
  vector<int> countArr(5);
  for(int i = 0; i < 5; i++) {
    string card = hand[i];
    int count = 1;
    for(int j = i+1; j < 5; j++) {
      string card_n = hand[j];
      if (card[0] == card_n[0])
	count++;
    }
    countArr[i] = count;
  }

  // for(auto i : countArr)
  //   cout << i << " ";
  // cout << '\n';
    // int x = count(hand.begin(), hand.end(), 'a');
    // countArr[0] = x;
  cout << *max_element(countArr.begin(), countArr.end()) << '\n';
}



