#include <stdio.h>

void haha(unsigned* a, unsigned char* b);

int main(){
  unsigned a = 0x1234;
  unsigned char b;

  haha(&a, &b);

  printf("0x%x\n", b);

  return 0;
}
