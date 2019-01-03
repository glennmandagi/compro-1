#include <stdio.h>

int main() {
  int hour,tol,tol2,em;
  int i,sal,total,tl;
  int back;

  sal = 10000;

  printf("Input Employee : ");
  scanf("%d",&em );

  printf("\n");
  printf("Total Employee : %d\n\n",em );

  for (i = 1; i <= em; i++) {
    printf("Input Hours : ");
    scanf("%d",&hour );
    printf("\n");

    if (hour > 7) {
      tol = sal * 7;
      tol2 = tol + (1.5 * sal);
    }
    else if (hour <= 7){
      tol2 = hour * sal;

    }
    printf("Employee work %d : %d\n",i,hour );
    printf("Employee Salary  %d\n\n",tol2 );

    tl = 1.5 * sal;
    total = tol + tl + 90000;
  }
  printf("Total Employee Salary %d\n",total);

  return 0;
}
