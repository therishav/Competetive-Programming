#include <bits/stdc++.h>
using namespace std;

void checkPanagram(string& str) {
  vector<bool> mark(26, false);

  int index;

  for (int i = 0; i < str.size(); i++) {
    if ('A' <= str[i] && 'Z' >= str[i])
      index = str[i] - 'A';
    else if ('a' <= str[i] && 'z' >= str[i])
      index = str[i] - 'a';
    else
      continue;
    mark[index] = true;
  }
  for (int i = 0; i <= 25; i++) {
    if (mark[i] == false) {
      cout << "missing ";
      for (int j = i; j <= 25; j++) {
	if (mark[j] == false)
	  cout << char(j+97);
      }
      return;
    }
  }
  cout << "pangram";
}

int main(int argc, char *argv[])
{
  int t;
  cin >> t;
  cin.ignore();
  while(t--) {
    string s;
    getline(cin, s);
    checkPanagram(s);
    cout << '\n';
  }
  return 0;
}
