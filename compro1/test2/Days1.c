#include <stdio.h>

int main() {
  int input;
  int num;
  printf("1. Sunday\n");
  printf("2. Monday\n");
  printf("3. Friday\n");
  printf("4. Tuesday\n");
  again:
  printf("Input : ");
  scanf("%d",&input);
  switch (input) {
    case 1:
      printf("Days\n");
      printf("Enter Number : " );
      scanf("%d",&num );
      if (num == 0 ) {
        printf("Today is Monday \n");
      }
      else{
        printf("Today is not Monday\n");
      }
    break;
    case 2:
      printf("Days\n");
      printf("Enter Number : " );
      scanf("%d",&num );
      if (num == 1 ) {
        printf("Today is Sunday \n");
      }
      else{
        printf("Today is not Sunday\n");
      }
    break;
    case 3:
      printf("Days\n");
      printf("Enter Number : " );
      scanf("%d",&num );
      if (num == 10 ) {
        printf("Today is Friday \n");
      }
      else{
        printf("Today is not Friday\n");
      }
    break;
    case 4:
      printf("Days\n");
      printf("Enter Number : " );
      scanf("%d",&num );
      if (num == 20 ) {
        printf("Today is Tuesday \n");
      }
      else{
        printf("Today is not Tuesday\n");
      }
    break;
    default:
      printf("Wrong Input\n");
  }
  goto again;
  return 0;
}
