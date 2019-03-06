#include <stdio.h>
#define MAX 5
void ShowArray(int A[],int n);

int main() {

  int A[MAX] = {1,5,2,9,10};
  int j,k;
  int temp;

  printf("Before sorting : \n");
  ShowArray(A, MAX);

  for ( j = 0; j < MAX-1; j++) {
    for ( k = 1; k < MAX; k++) {
      if (A[k]<A[k-1]) {
        temp = A[k];
        A[k]=A[k-1];
        A[k-1]= temp;
      }
    }
  }
  printf("\n");

  printf("After sorting : \n");
  ShowArray(A,MAX);
  return 0;
}

void ShowArray(int A[], int n){
  for (int  j= 0;  j< MAX; j++) {
    printf("A[%d] = %d\n",j,A[j] );
  }
}
