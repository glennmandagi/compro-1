#include <stdio.h>

int main(int argc, char const *argv[]) {
  int cat,dc,tc;
  cat = 1000;
  dc = cat * 0.2;
  tc = cat - dc;
  for (int i = 0; i <= 10; i++) {
    tc = tc * 2;
    printf("Month %d = %d\n",i,tc );
  }
  printf("Cat After 10 Month : %d \n",tc );
  return 0;
}
