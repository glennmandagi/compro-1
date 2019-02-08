#include <stdio.h>

int fib(int a);

int main() {
  int n,b;

  printf("Input N : ");
  scanf("%d",&n );
  // b = fib(n);
  printf("%d\n",fib(n));
  return 0;
}

int fib(a){
  if (a==1 || a==2) {
    return (1);
  }
  else {
    return (fib(a-1)+fib(a-2));
  }

}
