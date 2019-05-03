#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int arr[] = { 1,3,2,4,6,5,9,19,10,21};
  int temp;

  printf("Element in array before sorting : ");
  //print array before sorting
  for (int i = 0; i < 10; i++) {
    printf("%d ",arr[i] );
  }

  printf("\nElement in array after sorting : ");
  //bubble sort algorithm
  for (int j = 0; j < 10-1; j++) {
    for (int h = 0; h < 10-j-1; h++) {
      if (arr[h]>arr[h+1]) {
        temp = arr[h];
        arr[h] = arr[h+1];
        arr[h+1] = temp;
      }
    }
  }
  //print array after sorting
  for (int a = 0; a < 10; a++) {
    printf("%d ",arr[a] );
  }


  printf("\n");
  return 0;
}
