#include <stdio.h>

int main(int argc, char const *argv[]) {
  int quiz=0,i,avr,n,num;
  float sum;

  printf("Input N : ");
  scanf("%d",&n );
  for ( i = 1; i <= n; i++) {
    printf("%d.Input Number : ",i );
    scanf("%d",&num );
    quiz = quiz + num;
    avr = quiz / n;
    sum = 0.10 * avr;

  }

  printf("Quiz Value is %.2f\n",sum );
  return 0;
}
