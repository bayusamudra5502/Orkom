#include <stdio.h>

int test(int a);

int main(){
  printf("test(100) = %d\n", test(100));
  printf("test(0) = %d\n", test(0));
  printf("test(-100) = %d\n", test(-100));
  return 0;
}
