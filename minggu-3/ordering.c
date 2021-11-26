#include <stdio.h>

void show_bytes(char* s, int l) {
  for (int i = 0; i < l; i++) {
    printf("%p\t%x\n", s + i, s[i]);
  }
}

void show_short(short* s, int l) {
  for (int i = 0; i < l; i++) {
    printf("%p\t%x\n", s + i, s[i]);
  }
}

int main() {
  int s = 0x12345678;
  show_bytes((char*)&s, sizeof(int));
  printf("\n");
  show_short((short*)&s, 2);
  return 0;
}