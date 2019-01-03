#include <stdio.h>

int main(int argc, char const *argv[]) {
  int i,j;
  i=1;
  while (i<=5) {
    j=1;
    while (j<=i) {
      printf("%d",j );
      j++;
    }
    i++;
    printf("\n");
  }
  return 0;
}
