#include <stdio.h>

int main(int argc, char const *argv[]) {
  int n;
  printf("Input N : ");
  scanf("%d",&n);
  for (int i = 1; i <= n; i++) {
    printf("%d ",i );
  }
  printf("\n");
  return 0;
}
