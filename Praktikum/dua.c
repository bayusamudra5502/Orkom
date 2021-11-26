#include <stdio.h>

unsigned melawan(unsigned uf) {
  unsigned f, haha, res, e, s;

  haha = ((1 << 8) - 1) << 23;
  s = (uf & (1 << 31));
  e = haha & uf;
  f = ((1 << 23) - 1) & uf;

  res = uf;

  if (!e) {
    res = s | (f << 1);
  } else if (haha != e) {
    res = s | (e + (1 << 23)) | f;
    if (e + (1 << 23) == haha) {
      res = res ^ f;
    }
  }

  return res;
}

int orkomWillFallen(int x) {
  int a, b, c, d;

  a = (x ^ (x >> 16));
  b = (a ^ (a >> 8));
  c = (b ^ (b >> 4));
  d = (d ^ (d >> 2));

  return (d ^ (d >> 1)) & 1;
}

int main() {
  printf("%08x\n", orkomWillFallen(5));
  printf("%08x\n", orkomWillFallen(7));
  printf("%08x\n", orkomWillFallen(0b1101110));
  printf("%08x\n", orkomWillFallen(0b1));
  printf("%08x\n", orkomWillFallen(0b0));
}
