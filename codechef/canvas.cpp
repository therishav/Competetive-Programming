#include<bits/stdc++.h>         //there are many ways you
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n;
    cin >> t;

    while (t) {
        cin >> n;
        int cars;
        vector<int> car_arr(n, 0);
        for (int i=0; i<n; ++i) {
            cin >> cars;
            car_arr[i] = cars;
        }
        int len = car_arr.size(), count = 0;
        for (int i=0; i<len; i++) {
            if ((len == 1) || (i == 0)) {
                count++;

            }
            else if (car_arr[i] > car_arr[i-1]) {
                car_arr[i] = car_arr[i] - (car_arr[i] - car_arr[i-1]);
            }
            else {
                count++;
            }
        }
        cout << count << '\n';
        t--;

    }
}

// 3 1 5 4
//  a[i] = a[i]-(a[i] - a[i-1])
