#include <stdio.h>
#include <stdlib.h>
void back();

int main() {
  back();
  return 0;
}

void back() {
  int average,num,n,test;
  printf("Input N : ");
  scanf("%d",&n );
  printf("\n");
  for (int  i = 1; i <=n; i++) {
    printf("%d. Input Num : ",i);
    scanf("%d",&num );
    test += num ;
    average = test / i;
  }
  printf("\nThe Average is %d \n\n",average);
  return;
}
