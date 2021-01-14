#include<bits/stdc++.h>
using namespace std;

int main(void) {

  int n, plates;
  string act;

  while (true) {
    cin >> n;
    if (n == 0)
      break;

    int pile1 = 0, pile2 = 0;
    string temp = "";
    vector<string> action;
    while (n--) {
      cin >> act >> plates;
      if (act == "DROP") {
	
	action.push_back("DROP 2 " + to_string(plates));
	pile2 += plates;
      }
      else {
	if (pile1 >= plates) {
	  action.push_back("TAKE 1 " + to_string(plates));
	  pile1 -= plates;
	}
	else {
	  if (pile1 != 0) {
	    action.push_back("TAKE 1 " + to_string(pile1)); // empty all plates in pile 1 first
	    plates -= pile1;
	    pile1 = 0;
	  }
	
	  // if pile1 has 0 plates
	  action.push_back("MOVE 2->1 " + to_string(pile2)); // move all plates form pile1 to pile2
	  pile1 = pile2 - plates;
	  pile2 = 0;
	  action.push_back("TAKE 1 " + to_string(plates)); // give required no of plates
	}
      }
    }
    for (auto i : action)
      cout << i << '\n';
    cout << '\n';
  }
}
