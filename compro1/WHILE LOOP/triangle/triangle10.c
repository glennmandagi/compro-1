#include <stdio.h>

int main(int argc, char const *argv[]) {
  int i,j,h;
  i=5;
  while (i>=1) {
    j=1;
    while (j<=i) {
      printf(" ");
      j++;
    }
    h=5;
    while (h>=i) {
      printf("%d",h);
      h--;
    }
    i--;
    printf("\n");
  }

  return 0;
}
