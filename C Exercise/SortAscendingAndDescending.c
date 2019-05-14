#include <stdio.h>

int main(int argc, char const *argv[]) {
  int temp,i,j,num[10],choose;

  printf("Input Number : ");

  //input number
  for ( i = 0; i < 5; i++) {
    scanf("%d",&num[i]);
  }

  printf("Choose Ascending or Descending : ");
  scanf("%d",&choose );
  switch (choose) {
    case 1:
      // sort ascending
      for ( i = 0; i < 5-1; i++) {
        temp = 0;
        for ( j = 0; j < 5-i-1; j++) {
          if (num[j] > num[j+1]) {
            temp = num[j];
            num[j] = num[j+1];
            num[j+1] = temp;
          }
        }
      }
    break;

    case 2:
      //sort descending
      for ( i = 0; i < 5; i++) {
        temp = 0;
        for ( j = i+1; j < 5; j++) {
          if (num[i] < num[j]) {
            temp = num[i];
            num[i] = num[j];
            num[j] = temp;
          }
        }
      }
    break;
  }

  printf("\n\n");
  for ( i = 0; i < 5; i++) {
    printf("%d\n",num[i] );
  }
  return 0;
}
