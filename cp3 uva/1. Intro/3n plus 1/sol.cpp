#include <iostream>
#include <cstdio>
using namespace std;

#define print(i, j, x) printf("%d %d %d", i, j, x);
// #define print_n(x) cout << x << '\t';
// #define newl() cout << endl;

int cycle_len(int j)
{
    /* takes in j= starting number and outputs cycle length of j
        if j == even return j/2; else 3n+1; execution stops when j==1
    */
    int cycles = 1;
    // print_n(j);
    while (j != 1)
    {

        //check if even
        if ((j % 2) == 0)
        {
            j = j / 2;
        }
        else //else odd
        {
            j = (3 * j) + 1;
        }
        cycles++; //incrementing cycles
    }
    // print_n(cycles);
    // newl();
    return cycles;
}

int main()
{
    //
    //i = starting point; j = ending point; t = test cases
  int i, j, max_cycle, temp_cycle, t, lowVal, highVal;

  while (scanf("%d %d", &i, &j) != EOF)
    {
        max_cycle = 0;

        // Check for bigger and smaller
        if (i > j) {
          highVal = i;
          lowVal = j;
        }
        else if (j > i) {
          highVal = j;
          lowVal = i;
        }
        else if (i == j) {
          highVal = lowVal = i;
        }

        //we have to check cycle_lens for each element between lowVal and highVal
        for (int k = highVal; k >= lowVal; k--)
        {
            //calculate cycle length for k and put it in temp var
            temp_cycle = cycle_len(k);

            if (max_cycle < temp_cycle)
                max_cycle = temp_cycle;
        }

        print(i, j, max_cycle);
        cout << endl;
        t--;
    }
}
