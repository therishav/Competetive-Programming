#include <stdio.h>

int main() {

  char c;
  bool flag = false;
  while((c = getchar()) != EOF) {
    if ((c == '"') && (flag == false)) {
      putchar('`');
      putchar('`');
      flag = true;
    }
    else if((c == '"') && (flag == true)) {
      putchar('\'');
      putchar('\'');
      flag = false;
    }
    else {
      putchar(c);
    }
  }
  return 0;
}
