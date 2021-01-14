#include <bits/stdc++.h>
using namespace std;

class Complex {
  // private:
  //   double a;
  //   double b;
public:
  long double a;
  long double b;

  Complex(long double a, long double b) {
    this->a = a;
    this->b = b;
  }

  Complex square() {
    Complex temp(a * a - b * b, 2*a*b);
    return temp;
  }

  double absolute() {
    return sqrt(a*a + b*b);
  }
  
  void print() {
    cout << "a: " << a <<  " b: " << b << '\n';
  }
};

Complex add(Complex A, Complex B) {
  Complex temp(A.a + B.a, A.b + B.b);
  return temp;
}
int main(void) {

  long double x, y;
  int no = 1, r;
  
  while (cin >> x >> y >> r) {
    bool flag = true;
    Complex start(0.0, 0.0);
    Complex in(x, y);

    while(r--) {
      start = add(start.square(), in);
      // start.print();
      if (start.absolute() > 2) {
	flag = false;
	break;
      }
    }
    if (flag) 
      cout << "Case " << no << ": IN" << '\n';
    else
      cout << "Case " << no << ": OUT" << '\n';
    no++;
  }
  // Complex num(3.3, 4.5);
  // num.print();
  // Complex sq = num.square();
  // sq.print();
  return 0;
}
