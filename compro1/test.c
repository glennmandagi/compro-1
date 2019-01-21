#include <stdio.h>

int main(int argc, char const *argv[]) {
  int n;
  printf("Input number of rows for the table : ");
  scanf("%d",&n );
  for (int x = 1; x <= n; x++) {
    for (int y = 1; y <= n; y++) {
      printf("%d\t",y);
    }
    printf("\n");
  }
  return 0;
}
