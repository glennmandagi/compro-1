#include <stdio.h>

int function1(int a, int b);

int main() {
  int c=9,d=89;
  function1(c,d);
  return 0;
}

int function1(int a,int b){
  int t;
  t = b-a;
  printf("%d\n",t);
  return t;
}
