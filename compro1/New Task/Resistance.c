#include <stdio.h>

int main() {
  int series=0,parallel=0,res,input;
  printf("Input : ");
  scanf("%d",&input );
  printf("\n");
  switch (input) {
    case 1:
      printf("Series Resistance\n");
      for (int i = 1; i <= 3; i++) {
        printf("Input Resistance : ");
        scanf("%d",&res );
        series += res;
      }
      printf("Series Resistance = %d\n\n",series);
    break;
    case 2:
      printf("Parallel Resistance\n");

      for (int j = 1; j <= 2; j++) {
        printf("Input Resistance : ");
        scanf("%d",&res );
        parallel = (res*res)/(res+res);
      }
      printf("Parallel Resistance = %d\n\n",parallel);
    break;
    default:
    printf("Thank You\n\n");
  }
  return 0;
}
