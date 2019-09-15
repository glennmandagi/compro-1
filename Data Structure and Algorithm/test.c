#include <stdio.h>

int func(int x, int y);

int func(int x, int y){
  if (x<y){
    return -1;
  } else if (x == y) {
    return 1;
  } else {
    return (x-func(x -4,y));
  }
}

int main(int argc, char const *argv[]) {
  int a,b;

  printf("Input A & B : ");
  scanf("%d %d",&a,&b );

  printf("%d\n",func(a,b) );
  return 0;
}
