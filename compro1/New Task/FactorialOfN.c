#include <stdio.h>

int main() {
  int n,output=0;
  printf("Input N : ");
  scanf("%d",&n );
  printf("Factorial of : ");

  for (int i = 1; i <= n; i++) {
    printf("%d ",i );
    if (i != n ) {
      printf("+ ");
    }
    output += i;
  }
  printf("= %d\n",output );

  return 0;
}
