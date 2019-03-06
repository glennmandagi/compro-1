#include <stdio.h>
#include <stdlib.h>

int main() {
  int arr[10];
  int data,num=0;

  for (int i = 0; i < 10; i++) {
    printf("%d ",i );
    scanf("%d",&arr[i]);
  }

  printf("Input data : " );
  scanf("%d",&data );

  for (int j = 0; j < 10; j++) {
    if (data==arr[j]) {
      printf("Data %d found in array %d\n",data,j );
      num = 1;
    }
  }
  if (num!=1) {
    printf("Data not found in array\n" );
  }
  return 0;
}
