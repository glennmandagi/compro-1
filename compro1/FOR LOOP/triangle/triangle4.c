#include <stdio.h>

int main(int argc, char const *argv[]) {
  for (int i = 1; i <= 6; i++) {
    for (int h = 6; h >= i; h--) {
      printf("*");
    }
    printf("\n");
  }
  printf("\n");
  return 0;
}
