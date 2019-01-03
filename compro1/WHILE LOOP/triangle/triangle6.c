#include <stdio.h>

int main(int argc, char const *argv[]) {
  int i,j;
  i=5;
  while (i>=1) {
    j=1;
    while (j<=i) {
      printf("%d",j);
      j++;
    }
    i--;
    printf("\n");
  }
  return 0;
}
