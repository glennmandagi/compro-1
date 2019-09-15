#include <stdio.h>

int func(int n);

int func(int n ){
  if ( n == 1 || n == 0){
    return 1;
  } else {
    return n*func(n-1);
  }
}

int main(int argc, char const *argv[]) {
  int num;

  printf("Input Num : ");
  scanf("%d",&num );

  printf("%d\n",func(num) );
  return 0;
}
