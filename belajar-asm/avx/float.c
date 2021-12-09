#include <stdio.h>

float float_mov(float v1, float *src, float *dst) {
  float v2 = *src;
  *dst = v1;
  return v2;
}

int main() {
  float x, y;
  x = 20.5f;
  y = 3.5f;

  printf("%.2f %.2f %.2f\n", x, y, float_mov(1.5, &x, &y));

  return 0;
}