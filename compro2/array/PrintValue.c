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

  //with for loops
  // for ( i = 0; i < 5; i++) {
  //   if (array[i]<=75) {
  //     printf("%d\n",array[i]);
  //   } else {
  //     printf("Just print the number under 75 and 75 also.\n");
  //   }
  // }

  //with while loops
  i = 0;

  while (i<5) {
    if (array[i]<76) {
      printf("%d\n",array[i]);
    }
    i++;
  }
  return 0;
}
