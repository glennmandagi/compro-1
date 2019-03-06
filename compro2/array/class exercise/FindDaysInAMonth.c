#include <stdio.h>

int main() {
  int days,month,years;
  int sum_day[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

  printf("Input Month : ");
  scanf("%d",&month);

  printf("Inpur Year : ");
  scanf("%d",&years );

  if (month == 2) {
    if (years % 4 == 0) {
      days = 29;
    }
    else {
      days = 28;
    }
  }
  else {
    days = sum_day[month-1];
  }
  printf("Days in month %d year %d is %d days\n",month,years,days );
  return 0;
}
