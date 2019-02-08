//Factorial of N
#include <stdio.h>

int factorial(int n);

int main() {
  int a,c;
  printf("Input N : " );
  scanf("%d",&a);
  // c = factorial(a); <=> factorial(a);
  c = factorial(a);
  printf("%d\n",c);
  return 0;
}

int factorial(int n){
  int sum=1;
  for (int i = 1; i <= n; i++) {
    sum = sum * i;
  }
  return (sum);
}
