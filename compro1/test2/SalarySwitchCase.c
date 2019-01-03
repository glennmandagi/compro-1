#include <stdio.h>

int main(){
  int salary;
  int section;
  int hours;
  printf("1. Section 1\n");
  printf("2. Section 2\n");
  printf("3. Section 3\n");
  printf("4. Section 4\n");
  again:
  printf("Input Section : ");
  scanf("%d",&section );
  switch (section) {
    case 1:
      printf("Section 1 with salary Rp.3000/hours\n");
      printf("Input Hours : ");
      scanf("%d",&hours );
      if (hours <= 40) {
        printf("wages = 3000\n");
      }
      else if (hours > 40) {
        hours = 3000 * 1.5;
        printf("Wages = %d\n\n",hours );
      }
    break;

    case 2:
      printf("Section 2 with salary Rp.3500/hours\n");
      printf("Input Hours : ");
      scanf("%d",&hours );
      if (hours <= 40) {
        printf("wages = 3500\n");
      }
      else if (hours > 40) {
        hours = 3500 * 1.5;
        printf("Wages = %d\n\n",hours );
      }
    break;
    case 3:
      printf("Section 3 with salary Rp.4000/hours\n");
      printf("Input Hours : ");
      scanf("%d",&hours );
      if (hours <= 40) {
        printf("wages = 4000\n");
      }
      else if (hours > 40) {
        hours = 4000 * 1.5;
        printf("Wages = %d\n\n",hours );
      }
    break;
    case 4:
      printf("Section 4 with salary Rp.5000/hours\n");
      printf("Input Hours : ");
      scanf("%d",&hours );
      if (hours <= 40) {
        printf("wages = 5000\n");
      }
      else if (hours > 40) {
        hours = 5000 * 1.5;
        printf("Wages = %d\n\n",hours );
      }
    break;
    default:
      printf("Your salary is late to enter\n");
  }
  goto again;
  return 0;
}
