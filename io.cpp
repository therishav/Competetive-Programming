#include <bits/stdc++.h>
using namespace std;


// input: given a text of space seperated words spanning multiple lines..
// output: print the count of words in text;

int main(int argc, char *argv[])
{
  string line;
  while(getline(cin, line)) {
    int count = 0;
    stringstream ss(line);
    string word;
    while(getline(ss, word, ' ')) {
      count++;  
    }
    cout << count << '\n';
    
  }
  return 0;
}
