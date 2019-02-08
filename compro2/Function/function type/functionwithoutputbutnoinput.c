#include <stdio.h>

int function1();

int main() {
  int result = function1();
  printf("%d\n",result);
  return 0;
}

int function1(){
  printf("Hello\n");
}
