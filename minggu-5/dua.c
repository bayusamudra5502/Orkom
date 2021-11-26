#include <stdio.h>

int ayam(long a){
  int res = 2;
  int bat = res + 3;

  return res * bat + a;
}

int main(){
  ayam(20);
  return 0;
}
