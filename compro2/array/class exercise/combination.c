#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int arr[] = {5,7,10,2,4,9,1,8,3,6};
  int input,combination = 0;

  printf("Input : ");
  scanf("%d",&input );

  for (int i = 0; i < 10; i++) {
    printf("%d ",arr[i] );
  }

  printf("\n");

  for (int j = 0; j < 10; j++) {
    for (int i = j+1; i < 10; i++) {
      if ((arr[j]+arr[i]) == input) {
        printf("%d + %d = %d\n", arr[j], arr[i], input );
        combination++;
      }
    }

  }
  printf("There're %d combination\n", combination );

  printf("\n");

  return 0;
}
