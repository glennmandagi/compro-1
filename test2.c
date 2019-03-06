#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int arr[] = { 1,3,6,21,4,9,3,16,10,11};
  int temp,comb,sub=0;

  printf("Element in array : ");

  for (int i = 0; i < 10; i++) {
    printf("%d ",arr[i] );
  }
  printf("\n");
  for (int i=1; i<10; i++){
		for (int j=i; j>0 && arr[j]<arr[j-1]; j++)  {
      if ((arr[i]>arr[j])) {
        comb++;
      }
		}
	}

	// for(int i=0; i<10; i++){
	// 	printf("%d = %d\n",arr[i],comb);
  // }
  for (int j = 0; j < 10; j++) {
    if (arr[j]==arr[j-1]) {
      printf("%d =\n",arr[j],comb );
    }
  }
  printf("\n");
  return 0;
}
