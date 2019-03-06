#include <stdio.h>

int main(int argc, char const *argv[]) {
  int max,min,appears=0,num;

  printf("Input Numbers : \n");
  for (int i = 1; i < 8; i++) {
    scanf("%d",&num );

    if (i == 1) {
      max = num;
      min = num;
      appears = num;
    }
    else if (max < num) {
      max = num;
    }
    else if (min > num) {
      min = num;
    }
    else if (max == num){
      appears++;
    }
  }
  printf("Highest Number %d\n",max );
  printf("Lowest Number %d\n",min );
  printf("Same Number Appears %d\n",appears);
  return 0;
}
