#include <stdio.h>

int main(int argc, char const *argv[]) {
  int n,i,num,avr,ctr=0;
  float percentage=0;

  printf("Input N : ");
  scanf("%d",&n );
  for ( i = 1; i <= n; i++) {
    printf("%d.Input Number : ",i );
    scanf("%d",&num );
    ctr = ctr + num;
    avr = ctr / n;
    percentage = avr * 0.15;
  }
  printf("The Average Of N Is %d\n\n",avr );
  printf("Percentage is %.1f\n",percentage );
  return 0;
}
