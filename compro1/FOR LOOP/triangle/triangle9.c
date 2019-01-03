#include <stdio.h>

int main(int argc, char const *argv[]) {
  for (int i = 5; i >= 1; i--) {
    for (int j = 5; j >= i; j--) {
      printf(" ");
    }
    for (int h = 1; h <= i; h++) {
      printf("%d",i);
    }
    printf("\n");
  }
  printf("\n");
  return 0;
}
