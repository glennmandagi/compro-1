#include <stdio.h>

int main(int argc, char const *argv[]) {
  for (int i = 5; i >= 1; i--) {
    for (int j = 1; j <= i; j++) {
      printf(" ");
    }
    for (int h = 5; h >= i; h--) {
      printf("%d",h );

    }
    printf("\n");
  }
  printf("\n");
  return 0;
}
