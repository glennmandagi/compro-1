#include <stdio.h>

int main(int argc, char const *argv[]) {
  int sum=0,i;
  for ( i = 1; i <= 10; i++) {
    printf("%d ",i );
    sum += i;

  }
  printf("\n\n");
  printf("Sum of 10 natural numbers is %d\n",sum );
  return 0;
}
