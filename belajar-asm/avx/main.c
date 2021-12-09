#include <stdio.h>
#include <stdlib.h>

void ayam(int* data);
void vectorAdd(int n, int* v1, int* v2, int* res);

int main() {
  int size = 1 << 5;
  int* v1 = malloc(size);
  int* v2 = malloc(size);
  int* res = malloc(size);

  vectorAdd(size, v1, v2, res);

  printf("\n");
  free(v1);
  free(v2);
  free(res);

  return 0;
}
