#include <stdio.h>

int main(int argc, char const *argv[]) {
  int i,j;
  i =1;
  while (i<=6) {
    j = 6;
    while (j>=i) {
      printf("*");
      j--;
    }
    i++;
    printf("\n");
  }
  return 0;
}
