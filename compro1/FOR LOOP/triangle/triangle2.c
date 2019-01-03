#include <stdio.h>

int main(int argc, char const *argv[]) {
  for (int i = 1; i <= 5; i++) {
    for (size_t j = 1; j <= i; j++) {
      printf("%d",i );
    }
    printf("\n");
  }
  return 0;
}
