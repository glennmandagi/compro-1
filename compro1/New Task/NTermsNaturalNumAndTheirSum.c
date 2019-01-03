#include <stdio.h>

int main(int argc, char const *argv[]) {
  int n,sum=0;
  printf("Input N : ");
  scanf("%d",&n );
  
  for (int i = 1; i <= n; i++) {
    printf("%d",i );
    sum += i;
  }
  printf("\n");
  printf("the Sum Of N Terms Is : %d\n",sum );
  return 0;
}
