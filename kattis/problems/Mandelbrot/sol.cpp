#include <bits/stdc++.h>

class complex {
private:
  double a;
  double b;

public:
  complex(double a, double b) {
    this->a = a;
    this->b = b;
  }

  complex square(complex a) {
    complex temp(a.a * a.a - a.b * a.b, 2*a.a*a.b);
    return temp;
  }

  double abs(complex a) {
    return sqrt(a.a*a.b + a.b*a.b);
  }

};
complex add(complex a, complex b) {
  complex temp(a.a + b.a, a.b + a.b);
  return temp; 
}
// using namespace std;
int main(void) {
  double x, y;
  int no = 1, r;
  while(std::cin >> x >> y >> r) {

    complex start(0.0, 0.0);
    complex in(x, y);
    
    while(r--) {
      start = add(square(start), in);
    }
    if(abs(start) > 2)
      std::cout << "Case: " << no << ": IN" << '\n';
    else
      std::cout << "Case: " << no << ": IN" << '\n';
    no++;
  }
  return 0;
}
