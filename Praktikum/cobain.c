#include <stdio.h>

int haha(int x, int n){
  return (x & (255 << (n << 3))) >> (n << 3);
}

int abse(int x){
  return (x >> 31) ^ x + (x >> 31 & 1);
}

int uhuk(int x, int n){
  return ((~((1 << 31) >> ((~1 + 1) + n))) & (x >> n));
}

int main(){
  printf("0x%08x\n", uhuk((signed int)0xf7654321,4));
  printf("0x%08x\n", uhuk((signed int)0x12345678,4));
  printf("0x%08x\n", ((signed int) 0xf7654321) >> 4);
  printf("0x%08x\n", -1 >> 4);
  printf("0x%08x\n", uhuk(-1,0));
  return 0;
}
