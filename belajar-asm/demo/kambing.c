#include <stdio.h>

void coba(int*a, int*b, int c);

int main(){
  int a, b;

  coba(&a, &b, 12);
  printf("0x%x 0x%x\n", a, b);

  coba(&a, &b, -10);
  printf("0x%x 0x%x\n", a, b);
  return 0;
}
