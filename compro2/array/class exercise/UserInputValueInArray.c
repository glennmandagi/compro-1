#include <stdio.h>

int main(int argc, char const *argv[]) {
  int Mx;

  printf("Input Array : ");
  scanf("%d",&Mx );

  float arr[Mx],avr,num;

  for (int i = 0; i < Mx; i++) {
    printf("Input Value %d : ",i);
    scanf("%f",&arr[i] );
    num += arr[i];
  }
  
  printf("\nDisplay\n\n");

  for (int j = 0; j < Mx; j++) {
    printf("%.0f ",arr[j] );
  }
  printf("\n\n");
  avr = num / (float)Mx;
  printf("Average = %.2f\n",avr );
  return 0;
}
