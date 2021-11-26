#include <stdio.h>

int kucing(int a, int b){
  int c = a + b;
  return c * c;
}

int main(){
  int hasil = kucing(2,3);

  printf("%d\n", hasil);
  return 0;
}
