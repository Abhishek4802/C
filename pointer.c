#include <stdio.h>

int main() {
  int num = 10;
  int *p;

  p = &num;

  printf("The value of num is %d\n", num);
  printf("The address of num is %p\n", &num);
  printf("The value of p is %p\n", p);
  printf("The value that p points to is %d\n", *p);

  *p = 20;

  printf("The value of num is now %d\n", num);

  return 0;
}
