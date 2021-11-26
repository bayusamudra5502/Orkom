/**
 * Nama   : Bayu Samudra
 * NIM    : 13520128
 */
#include <stdio.h>

void illegal_move();
int func5(int a, int b, int c);

void Marbles(char* string) {
  int var1, var2;
  int val = sscanf(string, "%d %d", &var1, &var2);

  if (val != 2 || (unsigned)var1 > 0xe) {
    illegal_move();
  }

  int res = func4(var1, 0, 0xe);

  if (res != 0xd || var2 != 0xd) {
    illegal_move();
  }
}

int func4(int a, int b, int c) {
  int var = (c - b) >> 1;

  if (var == a) {
    return var;
  } else if (var > a) {
    return func(a, b, var) + var;
  } else {
    return func(a, var, c) + var;
  }
}
