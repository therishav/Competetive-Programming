#include <bits/stdc++.h>

using namespace std;

int main() {

  int months, depMonths, rateM, curMonth;
  double downPay, LoanAmt, depRate, carValue, rate, emi;
  map<int, double> mpRates;

  while (1) {
    cin >> months >> downPay >> LoanAmt >> depMonths;
    curMonth = 0;
    emi = LoanAmt / months;

    if (months < 0)
      break;
    
    mpRates.clear();
    while (depMonths--) {
      cin >> rateM >> depRate;
      mpRates.insert(pair<int, double>(rateM, depRate));
    }

    // month 0 calculation
    rate = mpRates[curMonth];
    carValue = LoanAmt + downPay;
    // cout << "carValue: " << carValue << " deduction amt: " << (carValue * rate) << '\n';
    carValue -= (carValue * rate);
    // printf("carValue: %f LoanAmt: %f: curMonth: %d rate: %f \n", carValue, LoanAmt, curMonth, rate);
    curMonth++;

    while (carValue < LoanAmt) { // starts calculation from month 1
      
      // if month exist in mpRates then rate = mpRate[curMonth]
      if (!(mpRates.find(curMonth) == mpRates.end())) 
	rate = mpRates[curMonth];
      
      carValue = carValue - (carValue * rate);
      LoanAmt -= emi;
      // printf("carValue: %f LoanAmt: %f: curMonth: %d rate: %f \n", carValue, LoanAmt, curMonth, rate);
      curMonth++;
    }
    (curMonth-1) == 1 ? printf("%d month\n", curMonth-1) : printf("%d months\n", curMonth-1);
    
    // printing the map
    // for (auto it1 = mpRates.begin(); it1!=mpRates.end(); ++it1) 
    //   cout << it1->first << "->" << it1->second << endl;
  }
}
