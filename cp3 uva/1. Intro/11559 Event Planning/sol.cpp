// solution

#include <bits/stdc++.h>

using namespace std;

int main() {
  int participants, budget, hotels, minAmt, weeks, hotelP, beds, cost, temp;
  // vector<int> bedArr;
  while (scanf("%d%d%d%d", &participants, &budget, &hotels, &weeks) == 4) {
    // printf("participants: %d budget: %d hotels: %d weeks: %d\n", participants, budget, hotels, weeks);
    minAmt = INT_MAX;
    
    while (hotels--) {
      cin >> hotelP;
      cost = participants * hotelP;
      // cout << "hotel price: " << hotelP << " cost: " << cost << '\n';
      // cout << "beds for each week:";

      temp = weeks;
      // bedArr.clear();
      while (temp--) {
	cin >> beds;
	// bedArr.push_back(beds);
	if ((beds >= participants) && (minAmt > cost) && (cost <= budget))
	  minAmt = cost;
      }

      // for (auto x : bedArr)
      // 	cout << x << " ";
      // cout << '\n';
    }
    minAmt == INT_MAX ? cout << "stay home" << '\n' : cout << minAmt << '\n';
  }
}
