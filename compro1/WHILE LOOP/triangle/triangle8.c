#include <stdio.h>

int main(int argc, char const *argv[]) {
  int i,j,h;
  i=1;
  while (i<=6) {
    j=5;
    while (j>=i) {
      printf(" ");
      j--;
    }
    h=1;
    while (h<=i) {
      printf("*");
      h++;
    }
    i++;
    printf("\n");
  }
  return 0;
}
