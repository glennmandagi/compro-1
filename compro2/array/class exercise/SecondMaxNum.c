#include <stdio.h>

int main(int argc, char const *argv[]) {
  int arr[10];
  int max=0,max2=0,i,input;
  printf("Input the size of array : ");
  scanf("%d",&input );
  for ( i = 0; i < input; i++) {
    printf("Element - %d : ",i );
    scanf("%d",&arr[i] );
  }

  for ( i = 0; i < input; i++) {

    if (arr[i] == 1) {
      max = arr[i];
    }
    else if (max < arr[i]) {
      max = arr[i];
    }
  }
  for ( i = 0; i < input; i++) {
    if (arr[i+1]) {
      max2 = arr[i];
    }
    else if (max2 < arr[i]) {
      max2 = arr[i];
    }
  }
  printf("Max Number : %d %d\n",max,max2 );
  return 0;
}
