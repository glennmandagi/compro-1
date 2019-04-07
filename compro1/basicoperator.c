#include <stdio.h>

int main(int argc, char const *argv[]) {
  int x=8,y=7;

  x++;
  x+=y--;

  printf("%d\n",x );
  return 0;
}
