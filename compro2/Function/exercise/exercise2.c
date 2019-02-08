#include <stdio.h>
#include <stdlib.h>

void addition();
void Input();
int a,b;
int main() {
  Input();
  addition();
  return 0;
}

void Input(){
  printf("Input A : ");
  scanf("%d",&a );
  printf("Input B : ");
  scanf("%d",&b );
}

void addition() {
  int c;
  c = a+b;
  printf("Sum : %d\n",c );
}
