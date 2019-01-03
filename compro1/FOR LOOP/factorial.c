#include <stdio.h>

int main(int argc, char const *argv[]) {
  int num,total;
  int output = 1;

  printf("Input Num : ");
  scanf("%d",&num );
  printf("\n" );
  printf("Factorial of : %d\n\n",num );
  printf("%d != ",num );

  for (int i = num; i >= 1; i--) {
    printf("%d ",i );
    if (i != 1 ) {
      printf("* ");
    }
    output = i * output;
  }
  printf("= %d",output );
  return 0;
}
