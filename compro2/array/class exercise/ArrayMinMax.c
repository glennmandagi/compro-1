#include <stdio.h>

int main(int argc, char const *argv[]) {
  int arr1[10] = {1,3,2,4,5,7,6,8,9,10};
  int max,min;

  for (int i = 0; i < 10; i++) {

    if (arr1[i] == 1) {
      max = arr1[i];
      min = arr1[i];
    }
    else if (max < arr1[i]) {
      max = arr1[i];
    }
    else if (min > arr1[i]) {
      min = arr1[i];
    }
  }
  printf("Max Number : %d\n",max );
  printf("Min Number : %d\n",min );
  return 0;
}
