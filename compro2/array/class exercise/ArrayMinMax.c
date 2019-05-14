#include <stdio.h>

int main(int argc, char const *argv[]) {
  int arr1[10];
  int max,min,i,j;

  for ( i = 0; i < 10; i++) {
    printf("Input Value : ");
    scanf("%d",&arr1[i] );
  }

  for ( j = 0; j < 10; j++) {

    if (j == arr1[j]) {
      max = arr1[j];
      min = arr1[j];
    }
    else if (arr1[j]>max) {
      max = arr1[j];
    }
    else if (arr1[j]<min) {
      min = arr1[j];
    }
  }
  printf("Max Number : %d\n",max );
  printf("Min Number : %d\n",min );
  return 0;
}
