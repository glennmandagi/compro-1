#include <stdio.h>
#include <stdlib.h>

int main() {
  int array[5];
  int num,i;

  for ( i = 0; i < 5; i++) {
    printf("Input Num %d : ",i );
    scanf("%d",&num );
    array[i] = num;
  }
  for ( i = 0; i < 5; i++) {
    if (array[i]<=75) {
      printf("%d\n",array[i]);
    }
  }
  return 0;
}
