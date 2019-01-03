#include <stdio.h>

int main(int argc, char const *argv[]) {
  int n,i,num,avr,ctr=0;

  printf("Input N : ");
  scanf("%d",&n );
  for ( i = 1; i <= n; i++) {
    printf("%d.Input Number : ",i );
    scanf("%d",&num );
    ctr = ctr + num;
    avr = ctr / n;
  }
  printf("The Average Of N Is %d\n\n",avr );
  return 0;
}
