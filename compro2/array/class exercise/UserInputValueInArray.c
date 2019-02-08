#include <stdio.h>
// #define Mx 5

int main() {
  int Mx = 5;
  int arr[Mx],avr,num=0;


  for (int i = 0; i < 5; i++) {
    printf("Input Value %d : ",i);
    scanf("%d",&arr[Mx] );
    num += arr[Mx];
  }

  for (int j = 0; j < 5; j++) {
    printf("%d ",arr[Mx] );
  }
  printf("\n");
  avr = num / 5;
  printf("Average = %d\n",avr );
  return 0;
}
