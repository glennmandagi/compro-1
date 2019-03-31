#include <stdio.h>

int main(int argc, char const *argv[]) {
  int input,delete;
  int arr[50];
  int i,j,h;

  printf("Input the size of array : ");
  scanf("%d",&input );

  printf("Input %d element in the array : ",input);
  printf("\n");

  for ( i = 0; i < input; i++) {
    printf("Element - %d : ",i );
    scanf("%d",&arr[i] );
  }

  printf("Input The position where to delete : ");
  scanf("%d",&delete );
  printf("\n");

  i=0;
  while (i!=delete) {
    i++;
  }
  while (i<input) {
    arr[i]=arr[i+1];
    i++;
  }
  input--;
  printf("New List : ");
  for ( i = 0; i < input; i++) {
    printf(" %d",arr[i] );
  }
  printf("\n");
  return 0;
}
