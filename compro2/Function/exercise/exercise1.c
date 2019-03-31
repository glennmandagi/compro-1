#include <stdio.h>
#include <stdlib.h>
int line();
int info();

int main() {
  info();
  return 0;
}

int info(){
  int a,b,c;
  printf("Input Name : ");
  scanf("%d",&a);
  line();

  printf("Input Faculty : ");
  scanf("%d",&b);
  printf("\n");
  line();

  printf("Input Hobby : ");
  scanf("%d",&c);
  printf("\n");
  line();
}

int line(){
  printf("-------------------\n");
}
