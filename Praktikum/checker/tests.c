/* Testing Code */

#include <limits.h>
#include <math.h>

/* Routines used by floation point test code */

/* Convert from bit level representation to floating point number */
float u2f(unsigned u) {
  union {
    unsigned u;
    float f;
  } a;
  a.u = u;
  return a.f;
}

/* Convert from floating point number to bit-level representation */
unsigned f2u(float f) {
  union {
    unsigned u;
    float f;
  } a;
  a.f = f;
  return a.u;
}

int test_amber(int x, int y)
{
    return ~(x ^ y);
}
int test_kaeya(void) {
  return 0x80000000;
}
int dvalin_test(int x) {
  return -x;
}
int test_handbook(int x, int n)
{
    unsigned char byte;
    switch(n) {
    case 0:
      byte = x;
      break;
    case 1:
      byte = x >> 8;
      break;
    case 2:
      byte = x >> 16;
      break;
    default:
      byte = x >> 24;
      break;
    }
    return (int) (unsigned) byte;
}
int test_medaka(int x) {
  return (x < 0) ? -x : x;
}
int test_sayu(int x)
{
    unsigned char byte0 = (x >> 0);
    unsigned char byte1 = (x >> 8);
    unsigned char byte2 = (x >> 16);
    unsigned char byte3 = (x >> 24);
    unsigned result = (byte0<<24)|(byte1<<16)|(byte2<<8)|(byte3<<0);
    return result;
}
int test_kujou(int x, int n) {
  unsigned u = (unsigned) x;
  unsigned shifted = u >> n;
  return (int) shifted;
}
int test_azhdaha(int x)
{
  if ((x+x+x)/3 != x)
    return x < 0 ? 0x80000000 : 0x7FFFFFFF;
  else
    return 3*x;
}
unsigned test_abyss(unsigned uf) {
  float f = u2f(uf);
  float tf = 2*f;
  if (isnan(f))
    return uf;
  else
    return f2u(tf);
}
int test_mondstadt(int x)
{
  int result = 0;
  int i;
  for(i = 0; i < 32; i++)
    result ^= (x>>i)&1;
  return result;
}
