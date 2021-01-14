/*
  ID: dzlvocp1
  TASK: beads
  LANG: C++                 
*/
/* LANG can be C++11 or C++14 for those more recent releases */

#include<bits/stdc++.h>
using namespace std;

string process(string s, int n) {
  string str = "";
  str += s.substr(n);
  if (n != 0)
    str += s.substr(0, n);
  return str;
}

int count(string str) {
  int sum = 0;
  char ch;
  // forward
  for (int i = 0; i < str.length(); i++) {
    if (str[i] == 'w')
      sum++;
    else {
      ch = str[i];
      for (int j = i; str.length(); j++) {
	if (str[j] == ch || str[j] == 'w')
	  sum++;
	else
	  break;
      }
      break;
    }
  }

  // backward
  for (int i = str.length()-1; i >= 0; i--) {
    if (str[i] == 'w')
      sum++;
    else {
      ch = str[i];
      for (int j = i; j >= 0; j--) {
	if (str[j] == ch || str[j] == 'w')
	  sum++;
	else
	  break;
      }
      break;
    }
  }
  if (sum > str.length()) 	// means the string has all elements same
    sum = str.length();
  return sum;
}

int main(void) {
  ofstream fout ("beads.out");
  ifstream fin ("beads.in");

  string s;
  int n;
  fin >> n;
  fin >> s;

  int max = -1;
  for (int i = 0; i < s.length(); i++) {
    string st = process(s, i);
    int m = count(st);
    if (m > max)
      max = m;
  }
  fout << max << '\n';
  return 0;
}
