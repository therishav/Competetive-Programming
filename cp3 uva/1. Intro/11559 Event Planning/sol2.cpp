// trying to make sense of IO
// takes input files and logs it.

#include <bits/stdc++.h>

using namespace std;

int main() {
  int participants, budget, hotels, minAmt, weeks, hotelP, beds, cost, temp;
  vector<int> bedArr;
  while (scanf("%d%d%d%d", &participants, &budget, &hotels, &weeks) == 4) {
    printf("participants: %d budget: %d hotels: %d weeks: %d\n", participants, budget, hotels, weeks);
    while (hotels--) {
      cin >> hotelP;
      cout << "hotel price: " << hotelP << '\n';
      cout << "beds for each week:";

      temp = weeks;
      bedArr.clear();
      while (temp--) {
	cin >> beds;
	bedArr.push_back(beds);
      }
      for (auto x : bedArr)
	cout << x << " ";
      cout << '\n';
    }
  }
}
