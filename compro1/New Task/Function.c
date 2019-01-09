#include <stdio.h>

int total(int,int);
int input,Input;

int main(void) {
  for (int i = 1; i <= 2; i++) {
    printf("Input Number : ");
    scanf("%d",&Input );
  }
  input = total(Input,Input);
  return 0;
}

int total(int x, int y ){
  int sum=0;
  sum = x + y;
  printf("Sum is = %d\n",sum);
  return sum;
}
