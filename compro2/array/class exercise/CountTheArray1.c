#include <stdio.h>

int main() {
  int arr1[4] = {1,2,3,4};
  int arr2[4] = {4,3,2,1};
  int sum[4];
  for (int i = 0; i < 4; i++) {
    sum[i]=arr1[i]+arr2[i];

  }
  for (int j = 0; j < 4; j++) {
    printf("%d ",sum[j]);
  }
  printf("\n");
  return 0;
}
