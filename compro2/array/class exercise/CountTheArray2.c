#include <stdio.h>

int main() {
  int n;

  printf("Input N : ");
  scanf("%d",&n );

  int arr1[n];
  int arr2[n];
  int sum[4];

  for (int x = 0; x < n; x++) {
    printf("Input Data 1 array %d : ",x);
    scanf("%d",&arr1[x] );
  }

  printf("\n");

  for (int y = 0; y < n; y++) {
    printf("Input Data 2 array %d : ",y);
    scanf("%d",&arr2[y] );
  }

  for (int i = 0; i < 4; i++) {
    sum[i]=arr1[i]+arr2[i];
  }

  for (int j = 0; j < 4; j++) {
    printf("%d ",sum[j]);
  }

  printf("\n");
  return 0;
}
