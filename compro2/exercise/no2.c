#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a=12,b=2,c=3,d=4;
  printf("%d\n",a%b );
  printf("%d\n",a-c );
  printf("%d\n",a+b );
  printf("%d\n",a/d );
  printf("%d\n",a/d*d+a&d );
  printf("%d\n",a%d/d*a-c );
  return 0;
}
