#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  int max[9],i,min[9],appears=0,num;
  int Max,Min;

  printf("Input Numbers : \n");
  for ( i = 0; i < 8; i++) {
    scanf("%d",&num );

    if (i == 1) {
      max[i] = num;
      min[i] = num;
    }
    else if (max[i] < num) {
      max[i] = num;
    }
    else if (min[i] > num) {
      min[i] = num;
    }
  }
  
  for ( i = 0; i < 8; i++) {
    appears=1;
    for (int j = i+1; j < 8; j++) {
      appears++;
    }
  }
  for ( i = 0; i < 8; i++) {
    printf("Highest Number %d\n",Max );
    printf("Lowest Number %d\n",Min );
  }
  printf("Same Number Appears %d\n",appears);

  return 0;
}
