#include <stdio.h>

int fun3(int x, int y){
  if (x > y) {
    return -1;
  }
  else {
    return (x * fun3(x+1,y));
  }
}

int main(int argc, char const *argv[]) {
  int a,b;
  printf("Input A : ");
  scanf("%d",&a );

  printf("Input B : ");
  scanf("%d",&b );
  printf("%d\n",fun3(a,b) );
  return 0;
}
