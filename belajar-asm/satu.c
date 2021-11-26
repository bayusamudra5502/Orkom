long perkalian2(long, long);

void perkalian(long x, long y, long* dest){
  long t = perkalian2(x,y);
  *dest = t;
}
