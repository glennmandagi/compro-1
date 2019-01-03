#include <stdio.h>

int main(int argc, char const *argv[]) {
  int fuel,km,tl,km2;
  fuel = 10;
  km = 0;
  tl - km + fuel;

  for (int i = 1; i <= 100; i++) {
    km2 = tl + i;
    tl = km2 * 0.8;
  }
  printf("Fuel After 100 KM %d\n",tl );
  return 0;
}
