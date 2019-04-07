#include <stdio.h>

int main(int argc, char const *argv[]) {
  int x=12,y;

  y = (x>=5)?8:y;
  printf("%d\n",y );
  /* This is equivalent to:
  if (x >= 5)
    y = 5;
  else
    y = x;
*/
  return 0;
}
